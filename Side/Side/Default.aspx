<%@ Page Title="Home Page" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Side._Default" %>

<asp:Content ID="BodyContent" ContentPlaceHolderID="MainContent" runat="server">

    <main>
        <section class="row" aria-labelledby="aspnetTitle">
            <h1 id="aspnetTitle">PFR POKER</h1>
            <p class="lead">Testing Page</p>
            <p><a href="https://github.com/matthew-luu/poker" class="btn btn-primary btn-md">Learn more &raquo;</a></p>
        </section>

        <div class="row">
            <section class="col-md-4" aria-labelledby="gettingStartedTitle">
                <asp:Button ID="Button1" runat="server" Text="Test Card" OnClick="Button1_Click" />
            </section>
            <section class="col-md-4" aria-labelledby="librariesTitle">
                <asp:Button ID="Button2" runat="server" Text="Test Deck" OnClick="Button2_Click" />
            </section>
            <section class="col-md-4" aria-labelledby="hostingTitle">
                <asp:Button ID="Button3" runat="server" Text="Test H" OnClick="Button3_Click" />
            </section>
        </div>
    </main>

</asp:Content>
