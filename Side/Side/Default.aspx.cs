using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Side
{
    public partial class _Default : Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Response.Write("Button 1 clicked!");
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Response.Write("Button 2 clicked!");
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            Response.Write("Button 3 clicked!");
        }
    }
}