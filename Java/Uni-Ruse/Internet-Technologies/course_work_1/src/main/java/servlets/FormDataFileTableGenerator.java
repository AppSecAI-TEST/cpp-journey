package servlets;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class FormDataFileTableGenerator extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		
		ServletContext context = request.getServletContext();
		final String INPUT_FILE_PATH =  context.getRealPath("/") + "output.txt";
		
		StringBuilder pageHTML = new StringBuilder(
			"<!DOCTYPE html>" +
			"<html>"+
			"<body>" +
				"<table border='1'>"
		);
		
		// Read from input file & add to page HTML
		BufferedReader bufferedReader = new BufferedReader(new FileReader(INPUT_FILE_PATH));
		String line = "";
		while ((line = bufferedReader.readLine()) != null) {
			pageHTML.append(
					"<tr><td>" + line + "</td></td>"	
			);
		}
		bufferedReader.close();
		
		pageHTML.append(
				"</table>" +
			"</body>" +
			"</html>");
		
		PrintWriter output = response.getWriter();
		output.print(pageHTML);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
	}

}
