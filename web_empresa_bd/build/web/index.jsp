<%-- 
    Document   : index
    Created on : 27 sept 2025, 19:52:20
    Author     : pollo
--%>
<%@page import="modelo.Puesto"  %>
<%@page import="modelo.Empleado"  %>
<%@page import="javax.swing.table.DefaultTableModel"  %>
<%@page import="java.util.HashMap" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>EMPLEADOS</title>
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/css/bootstrap.min.css" integrity="sha384-xOolHFLEh07PJGoPkLv1IbcEPTNtaed2xpHsD9ESMhqIYd0nLMwNLD69Npy4HI+N" crossorigin="anonymous">
    </head>
    <body>
        <h1>FORMULARIO EMPLEADOS</h1>
        <div class ="container">
            <form action="sr_empleado" method="post" class="form-group">
                <label for="lbl_codigo"><b>Codigo:</b> </label> 
                <input type="text" name="txt_codigo" id="txt_codigo" class="form-control" placeholder="ejemplo: E001" required>
                <label for="lbl_nombres"><b>Nombres:</b> </label> 
                <input type="text" name="txt_nombres" id="txt_nombres" class="form-control" placeholder="ejemplo: Nombre 1 Nombre 2" required>
                <label for="lbl_apellidos"><b>Apellidos: </b></label> 
                <input type="text" name="txt_apellidos" id="txt_apellidos" class="form-control" placeholder="ejemplo: Apellido 1 Apellido 2" required>
                <label for="lbl_direccion"><b>Dirección: </b></label> 
                <input type="text" name="txt_direccion" id="txt_direccion" class="form-control" placeholder="ejemplo: # casa calle zona ciudad" required>
                <label for="lbl_telefono"><b>Telefono: </b></label> 
                <input type="number" name="txt_telefono" id="txt_telefono" class="form-control" placeholder="ejemplo: 55555555" required>
                <label for="lbl_fn"><b>Fecha Nacimiento: </b></label> 
                <input type="date" name="txt_fn" id="txt_fn" class="form-control"  required>
                <label for="lbl_puesto"><b>Puesto: </b></label> 
                <select name="drop_puesto" id="drop_puesto" class="form-control">
                   
                    <%
                    Puesto puesto = new Puesto();
                    HashMap <String,String> drop = puesto.drop_sangre();
                    for (String i: drop.keySet()){
                    out.println("<option value='" + i + "'>" + drop.get(i) +"</option>");
                      }
                    %>
                    
                </select>
                <br>
                <button  name="btn_agregar" id="btn_agregar" value="agregar" class="btn btn-primary">Agregar</button>
            <button  name="btn_modificar" id="btn_modificar" value="modificar" class="btn btn-primary">Modificar</button>
            
            </form> 
                    <table class="table table-striped">
    <thead>
      <tr>
        <th>Codigo</th>
        <th>Nombres</th>
        <th>Apellidos</th>
        <th>Direccion</th>
        <th>Telefono</th>
        <th>Nacimiento</th>
        <th>Puesto</th>
      </tr>
    </thead>
    <tbody id="tbl_empleados">
     <%
     
     Empleado empleado = new Empleado ();
     DefaultTableModel tabla = new DefaultTableModel();
     tabla = empleado.leer();
     for (int t=0;t<tabla.getRowCount();t++){
     out.println("<tr data-id=" + tabla.getValueAt(t, 0) + ">");
     out.println("<td>" + tabla.getValueAt(t,1 )"</td>");
     out.println("</tr>");
         
         }
     %>
     
    </tbody>
  </table>
        </div>
        <script src="https://cdn.jsdelivr.net/npm/jquery@3.5.1/dist/jquery.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.1/dist/umd/popper.min.js" integrity="sha384-9/reFTGAW83EW2RDu2S0VKaIzap3H66lZH81PoYlFhbGU+6BZp6G7niu735Sk7lN" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.6.2/dist/js/bootstrap.min.js" integrity="sha384-+sLIOodYLS7CIrQpBjl+C7nPvqq+FbNUBDunl/OZv93DB7Ln/533i8e/mZXLi/P+" crossorigin="anonymous"></script>
    </body>
</html>
