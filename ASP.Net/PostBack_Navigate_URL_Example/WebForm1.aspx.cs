﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace AspNetProject
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {
            Response.Redirect("WebForm2.aspx");
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
             Response.Redirect("WebForm2.aspx");
        }
    }
}
