
int getId(eAlumno* alumno)
{
    int id = -1;
    if(alumno!=NULL)
    {
        id= alumno->id;
    }
    return id;
}


void setID(eAlumno* alumno, int id)
{
    alumno->id = id;
}
