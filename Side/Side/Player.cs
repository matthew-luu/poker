using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace Side
{
    public class Player
    {
        public int position { get; set; }
        public Hand hand { get; set; }
        DataSet pfrRanges { get; set; }
        public Player()
        {
            position = 0;
        }
        public Player(int position)
        {
            this.position = position;
        }
        public void Deal(Hand hand)
        {
            this.hand = hand;
        }
        protected void GetPFRRanges()
        {
            pfrRanges = new DataSet();
            using (SqlConnection objConnection = new SqlConnection())
            {
                using (SqlDataAdapter dataAdapter = new SqlDataAdapter())
                {
                    dataAdapter.SelectCommand = new SqlCommand("getPFRRanges", objConnection);
                    dataAdapter.SelectCommand.CommandType = System.Data.CommandType.StoredProcedure;
                    dataAdapter.Fill(pfrRanges);
                }
            }
        }

        //public bool IsHandInRange(DataSet ranges)
        //{
        //    foreach (DataRow row in ranges.Tables[position].Rows)
        //    {
        //        if (String.Compare(ranges.Tables[position].Rows["RANK"].ToString(), hand.ranks) == 0 && (Convert.ToBoolean(ranges.Tables[position].Rows["SUITED"])) == hand.suited) return true;
        //    }
        //    return false;
        //}

        protected bool IsHandInRangeDB()
        {
            //This method is slow, but pulls directly from SQL.
            bool inRange;
            using (SqlConnection objConnection = new SqlConnection())
            {
                using (SqlDataAdapter dataAdapter = new SqlDataAdapter())
                {
                    dataAdapter.SelectCommand = new SqlCommand("isHandInRange", objConnection);
                    dataAdapter.SelectCommand.CommandType = System.Data.CommandType.StoredProcedure;
                    dataAdapter.SelectCommand.Parameters.AddWithValue("@position", position);
                    dataAdapter.SelectCommand.Parameters.AddWithValue("@rank", hand.ranks);
                    dataAdapter.SelectCommand.Parameters.AddWithValue("@suited", hand.suited);
                    dataAdapter.SelectCommand.Connection.Open();
                    inRange = Convert.ToBoolean(dataAdapter.SelectCommand.ExecuteScalar());
                }
            }
            return inRange;
        }
    }
}