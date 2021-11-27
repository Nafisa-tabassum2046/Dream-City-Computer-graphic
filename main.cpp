#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
# define PI           3.14159265358979323846

float xcloud=0.00,xcar1=0.00, xcar2=0.00, xboat=0.00, xtube1=0.00, ytube2=0.00, xhumanLeft = 0.00, xhumanRight = 0.00, ygoalkeeperLeft=0.0,ygoalkeeperRight=0.0;

void quads(float x1, float y1, float x2, float y2, float x3, float y3,float x4,float y4)
{

    glVertex3f(x1,y1,0);
    glVertex3f(x2,y2,0);
    glVertex3f(x3,y3,0);
    glVertex3f(x4,y4,0);

}

void quads_body(float x1, float y1, float x2, float y2, float x3, float y3,float x4,float y4, float cr,float cg,float cb)
{
    glBegin(GL_QUADS);
    glColor3ub(cr,cg,cb);

    glVertex3i(x1,y1,0);
    glVertex3i(x2,y2,0);
    glVertex3i(x3,y3,0);
    glVertex3i(x4,y4,0);
    glEnd();
}

void circle(float x_axis_value, float y_axis_value,float redius,float triangleAmunt,float cr,float cg,float cb)
{

    int i;

    GLfloat x=x_axis_value;
    GLfloat y=y_axis_value;
    GLfloat radius =redius;
    int triangleAmount = triangleAmunt;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(cr, cg, cb);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}

void hill(float x1, float y1, float x2, float y2, float x3, float y3,float cr,float cg,float cb )
{
    glBegin(GL_TRIANGLES); // Begin Quads Shape.Sky Start
    glColor3ub(cr,cg,cb);

    glVertex3i(x1,y1,0);
    glVertex3i(x2,y2,0);
    glVertex3f(x3,y3,0);
    glEnd();
}


// field tree er jonno
void tree_body_shikor(float x1, float y1, float x2, float y2, float x3, float y3,float x4,float y4)
{

    glBegin(GL_QUADS); // Begin Quads Shape. tree start 2

    glColor3ub(123,54,25);
    glVertex3i(x1,y1,0);
    glVertex3i(x2,y2,0);
    glVertex3i(x3,y3,0);
    glVertex3i(x4,y4,0);
    glEnd();

}

void tree()
{
// tree code start
//1st tree
    quads_body(66,62,67.5,62,67.5,68,66,68,144,86,112);// tree body
    circle(66,68,2,50,71,158,166);
    circle(66,68,2,50,71,158,166);
    circle(63,67,2.5,50,71,158,166);
    circle(69,67,2.5,50,71,158,166);
    circle(66,70.4,2.1,50,71,158,166);
    circle(63,70.5,2.1,50,71,158,166);
    circle(69,71,2,50,71,158,166);
    circle(66,73,3,50,71,158,166);


//2nd tree

//tree_body(86,62,87.5,62,87.5,68,86,68,144,86,112);
    quads_body(86,62,87.5,62,87.5,68,86,68,144,86,112);
    circle(86,68,2,50,71,158,166);
    circle(83,67,2.5,50,71,158,166);
    circle(89,67,2.5,50,71,158,166);
    circle(86,70.4,2.1,50,71,158,166);
    circle(83,70.5,2.1,50,71,158,166);
    circle(89,71,2,50,71,158,166);
    circle(86,73,3,50,71,158,166);

//3rd tree



//tree_body(106,62,107.5,62,107.5,68,106,68,144,86,112);
    quads_body(106,62,107.5,62,107.5,68,106,68,144,86,112);

    circle(106,68,2,50,71,158,166);
    circle(103,67,2.5,50,71,158,166);
    circle(109,67,2.5,50,71,158,166);
    circle(106,70.4,2.1,50,71,158,166);
    circle(103,70.5,2.1,50,71,158,166);
    circle(109,71,2,50,71,158,166);
    circle(106,73,3,50,71,158,166);

// 4th tree

//tree_body(126,62,127.5,62,127.5,68,126,68,144,86,112);
    quads_body(126,62,127.5,62,127.5,68,126,68,144,86,112);
    circle(126,68,2,50,71,158,166);
    circle(123,67,2.5,50,71,158,166);
    circle(129,67,2.5,50,71,158,166);
    circle(126,70.4,2.1,50,71,158,166);
    circle(123,70.5,2.1,50,71,158,166);
    circle(129,71,2,50,71,158,166);
    circle(126,73,3,50,71,158,166);
//5th tree


//tree_body(141,62,142.5,62,142.5,68,141,68,144,86,112);
    quads_body(141,62,142.5,62,142.5,68,141,68,144,86,112);
    circle(141,68,2,50,71,158,166);
    circle(138,67,2.5,50,71,158,166);
    circle(144,67,2.5,50,71,158,166);
    circle(141,70.4,2.1,50,71,158,166);
    circle(138,70.5,2.1,50,71,158,166);
    circle(144,71,2,50,71,158,166);
    circle(141,73,3,50,71,158,166);

//math ar pase tree


//tree_body(58,12,59.5,12,59.5,18,58,18,123,54,25);
    quads_body(58,12,59.5,12,59.5,18,58,18,123,54,25);
    tree_body_shikor(57,10,60,10,60,12,57.2,12);


    circle(58,18,2,50,4,60,10);
    circle(55,17,2.5,50,4,60,10);
    circle(61,17,2.5,50,4,60,10);
    circle(58,20.4,2.1,50,4,60,10);
    circle(55,20.5,2.1,50,4,60,10);
    circle(61,21,2,50,4,60,10);
    circle(58,23,3,50,4,60,10);


// Begin Quads Shape. tree start


//tree_body(138,12,139.5,12,139.5,18,138,18,123,54,25);
    quads_body(138,12,139.5,12,139.5,18,138,18,123,54,25);
    tree_body_shikor(137,10,140,10,140,12,137.2,12);

    circle(138,18,2,50,4,60,10);
    circle(135,17,2.5,50,4,60,10);
    circle(141,17,2.5,50,4,60,10);
    circle(138,20.4,2.1,50,4,60,10);
    circle(135,20.5,2.1,50,4,60,10);
    circle(141,21,2,50,4,60,10);
    circle(138,23,3,50,4,60,10);

// tree code end

}

void house_backsite_tree()
{
//1st tree house ar pichon ar tree 2 ta

//tree_body(46,62,47.5,62,47.5,68,46,68,144,86,112);
    quads_body(46,62,47.5,62,47.5,68,46,68,144,86,112);
    circle(49,68,2,50,71,158,166);
    circle(49,68,2,50,71,158,166);
    circle(46,67,2.5,50,71,158,166);
    circle(52,67,2.5,50,71,158,166);
    circle(49,70.4,2.1,50,71,158,166);
    circle(46,70.5,2.1,50,71,158,166);
    circle(52,71,2,50,71,158,166);
    circle(49,73,3,50,71,158,166);


//tree_body(8,62,9.5,62,9.5,68,8,68,144,86,112);
    quads_body(8,62,9.5,62,9.5,68,8,68,144,86,112);

    circle(8,68,2,50,71,158,166);
    circle(8,68,2,50,71,158,166);
    circle(5,67,2.5,50,71,158,166);
    circle(11,67,2.5,50,71,158,166);
    circle(8,70.4,2.1,50,71,158,166);
    circle(5,70.5,2.1,50,71,158,166);
    circle(11,71,2,50,71,158,166);
    circle(8,73,3,50,71,158,166);

// house back site tree end
}

void cloud()
{

// meg 1
    circle(120,90,3,50,255,168,141);

    circle(115,90,5,50,255,168,141);

    circle(110,90,4,50,255,168,141);

    circle(106,90,3,50,255,168,141);
//meg 2

    circle(43,90,3,50,255,168,141);

    circle(48,90,4,50,255,168,141);

    circle(53,90,3,50,255,168,141);

//meg 3

    circle(0,90,3,50,255,168,141);

    circle(5,90,4,50,255,168,141);

    circle(10,90,3,50,255,168,141);

}


void boat()
{

//1st noika


    glBegin(GL_TRIANGLES); // Begin GL_TRIANGLES font Shape. noika
    glColor3ub(247,86,0);

    glVertex3f(70,71.5,0);
    glVertex3i(73,70,0);
    glVertex3f(73,71.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads body Shape. 1st noika start
    glColor3ub(247,86,0);

    glVertex3i(73,70,0);
    glVertex3i(79,70,0);
    glVertex3f(79,71.5,0);
    glVertex3f(73,71.5,0);
    glEnd();


    glBegin(GL_TRIANGLES); // Begin Quads back Shape noika
    glColor3ub(247,86,0);

    glVertex3f(79,70,0);
    glVertex3f(79,71.5,0);
    glVertex3f(82,71.5,0);
    glEnd();



    glBegin(GL_TRIANGLES); // Begin Quads tula Shape. noika
    glColor3ub(126,22,22);

    glVertex3f(73,71.5,0);
    glVertex3f(79,71.5,0);
    glVertex3f(75,73,0);
    glEnd();


//2nd noika


    glBegin(GL_TRIANGLES); // Begin Quads font Shape. noika
    glColor3ub(247,86,0);

    glVertex3f(110,73.5,0);
    glVertex3i(113,72,0);
    glVertex3f(113,73.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads body Shape. 1st noika start
    glColor3ub(247,86,0);

    glVertex3i(113,72,0);
    glVertex3i(119,72,0);
    glVertex3f(119,73.5,0);
    glVertex3f(113,73.5,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin back Quads Shape. noika
    glColor3ub(247,86,0);

    glVertex3f(119,72,0);
    glVertex3f(119,73.5,0);
    glVertex3f(122,73.5,0);
    glEnd();




    glBegin(GL_TRIANGLES); // Begin Quads tula Shape. noika
    glColor3ub(126,22,22);

    glVertex3f(115,73.5,0);
    glVertex3f(121,73.5,0);
    glVertex3f(119,75,0);
    glEnd();
// noika done
}

void waves(float x1, float y1, float x2, float y2, float x3, float y3,float x4,float y4)
{

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(x1,y1,0);
    glVertex3i(x2,y2,0);
    glVertex3f(x3,y3,0);
    glVertex3f(x4,y4,0);
    glEnd();

}


void river_waves()
{

    waves(3,76,10,76,10,76.3,3,76.3);
    waves(0,70,10,70,10,70,0,70.3);
    waves(50,66,60,66,60,66.3,50,66.3);
    waves(56,73,70,73,70,73.3,56,73.3);
    waves(66,67,76,67,76,67.3,66,67.3);
    waves(76,70,88,70,88,70.3,76,70.3);




// deu nodi

    waves(80,74,90,74,90,74.3,80,74.3);
    waves(86,68,96,68,96,68.3,86,68.3);
    waves(92,76,100,76,100,76.3,92,76.3);
    waves(98,73,110,73,110,73.3,98,73.3);
    waves(107,70,117,70,117,70.3,107,70.3);
    waves(119,71,127,71,127,71.3,119,71.3);
    waves(129,68,140,68,140,68.3,129,68.3);



}


void river()
{


// house backside river start
    glBegin(GL_QUADS); // Begin Quads Shape.
    glColor3ub(91,206,227);

    glVertex3i(0,60,0);
    glVertex3i(160,60,0);
    glVertex3i(160,78,0);
    glVertex3i(0,78,0);
    glEnd();
// house backside river end

// boat shape
    glPushMatrix();
    glTranslatef(xboat,0,0);
    boat();
    glPopMatrix();


    glBegin(GL_QUADS); // river side kinara shape
    glColor3ub(128,128,128);

    glVertex3i(0,77,0);
    glVertex3i(160,77,0);
    glVertex3i(160,78,0);
    glVertex3i(0,78,0);
    glEnd();

    river_waves();

}

void top_hill()
{

    hill(0,78,5,78,2.5,86,168,117,140);
    hill(3,78,10,78,6,85,252,148,138);

    hill(7,78,20,78,12,90,233,137,146);


    hill(40,78,55,78,47,85,233,137,146);

    hill(50,78,65,78,58,85,252,148,138);

    hill(60,78,80,78,70,85,233,137,146);

    hill(75,78,82,78,79,85,252,148,138);

    hill(80,78,90,78,85,86,233,137,146);

    hill(88,78,102,78,95,87,252,165,165);
    hill(100,78,112,78,106,90,233,137,146);

    hill(106,78,118,78,113,86,207,120,137);

    hill(116,78,128,78,123,88,252,165,164);

    hill(126,78,140,78,133,96,248,133,146);


}

void sun(){
circle(78,85,7,50,255,245,218);
}

void sky()
{

    glBegin(GL_QUADS); // Sky Start
    glColor3ub(251,203,185);

    glVertex3i(0,78,0);
    glVertex3i(160,78,0);
    glVertex3i(160,150,0);
    glVertex3i(0,150,0);
    glEnd();

//sun
    sun();

    glPushMatrix();
    glTranslatef(xcloud,0,0);
    cloud();
    glPopMatrix();
}

void house()
{
// house code start

    glBegin(GL_QUADS); //  New house
    glColor3ub(49,106,123);
    quads(4,58,51,58,51,58.5,4,58.5);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house body 1
    glColor3ub(255,254,254);
    quads(20,58.5,46,58.5,46,87,20,87);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house body 1
    glColor3ub(19,59,82);
    quads(20,87,46,87,46,91,20,91);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house body 1
    glColor3ub(255,254,254);

    quads(18,58.5,48,58.5,48,83,18,83);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(255,254,254);

    glVertex3i(18,83,0);
    glVertex3i(48,83,0);
    glVertex3f(33,94,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house cal part 1
    glColor3ub(19,59,82);
    quads(17,80,33,94,33,96,17.5,83);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house cal part 2
    glColor3ub(19,59,82);
    glVertex3f(49,80,0);
    glVertex3f(33,94,0);
    glVertex3f(33,96,0);
    glVertex3f(48.5,83,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house cal part 2
    glColor3ub(184,205,220);

    glVertex3f(48,79.5,0);
    glVertex3f(32,93,0);
    glVertex3f(33,94,0);
    glVertex3f(48,81,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house shodw body
    glColor3ub(122,191,186);

    glVertex3f(23,58.5,0);
    glVertex3f(31,58.5,0);
    glVertex3f(31,92.4,0);
    glVertex3f(23,85.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house window
    glColor3ub(255,255,254);

    glVertex3f(24,60,0);
    glVertex3f(30,60,0);
    glVertex3f(30,70,0);
    glVertex3f(24,70,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house window
    glColor3ub(19,60,83);

    glVertex3f(24.4,60.3,0);
    glVertex3f(26.8,60.3,0);
    glVertex3f(26.8,69.7,0);
    glVertex3f(24.4,69.7,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window nicher ta
    glColor3ub(19,60,83);

    glVertex3f(27.2,60.3,0);
    glVertex3f(29.6,60.3,0);
    glVertex3f(29.6,69.7,0);
    glVertex3f(27.2,69.7,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window ar nicher sada path
    glColor3ub(255,255,254);

    glVertex3f(23.5,59.3,0);
    glVertex3f(30.5,59.3,0);
    glVertex3f(30.5,59.6,0);
    glVertex3f(23.5,59.6,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window ar nicher sada path
    glColor3ub(255,255,254);

    glVertex3f(23.5,58.8,0);
    glVertex3f(30.5,58.8,0);
    glVertex3f(30.5,59,0);
    glVertex3f(23.5,59,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house window opreta
    glColor3ub(255,255,254);

    glVertex3f(24,77,0);
    glVertex3f(30,77,0);
    glVertex3f(30,84,0);
    glVertex3f(24,84,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window
    glColor3ub(19,60,83);

    glVertex3f(24.4,77.3,0);
    glVertex3f(26.8,77.3,0);
    glVertex3f(26.8,83.7,0);
    glVertex3f(24.4,83.7,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window
    glColor3ub(19,60,83);

    glVertex3f(27.2,77.3,0);
    glVertex3f(29.6,77.3,0);
    glVertex3f(29.6,83.7,0);
    glVertex3f(27.2,83.7,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window ar oprer blue  path
    glColor3ub(19,60,83);

    glVertex3f(23.5,76.2,0);
    glVertex3f(30.5,76.2,0);
    glVertex3f(30.5,76.5,0);
    glVertex3f(23.5,76.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house window opreta ar paser ta windows
    glColor3ub(195,202,204);

    glVertex3f(32.5,80,0);
    glVertex3f(41.5,80,0);
    glVertex3f(41.5,84,0);
    glVertex3f(32.5,84,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house window opreta ar paser ta windows
    glColor3ub(255,254,254);

    glVertex3f(32.7,80.2,0);
    glVertex3f(41.3,80.2,0);
    glVertex3f(41.3,83.8,0);
    glVertex3f(32.7,83.8,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window opreta ar paser ta windows blue part
    glColor3ub(19,60,83);

    glVertex3f(32.9,80.3,0);
    glVertex3f(36.8,80.3,0);
    glVertex3f(36.8,83.7,0);
    glVertex3f(32.9,83.7,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house window opreta ar paser ta windows blue part
    glColor3ub(19,60,83);

    glVertex3f(37.2,80.3,0);
    glVertex3f(41.1,80.3,0);
    glVertex3f(41.1,83.7,0);
    glVertex3f(37.2,83.7,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. house red part
    glColor3ub(243,62,77);

    glVertex3f(4,58.5,0);
    glVertex3f(18,58.5,0);
    glVertex3f(18,74,0);
    glVertex3f(4,74,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. house red part
    glColor3ub(241,246,247);

    glVertex3f(6,58.5,0);
    glVertex3f(16,58.5,0);
    glVertex3f(16,71,0);
    glVertex3f(6,71,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. house red part
    glColor3ub(19,59,84);

    glVertex3f(6,70.6,0);
    glVertex3f(16,70.6,0);
    glVertex3f(16,71,0);
    glVertex3f(6,71,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. house red part
    glColor3ub(19,59,84);

    glVertex3f(4,73.5,0);
    glVertex3f(18,73.5,0);
    glVertex3f(18,74.5,0);
    glVertex3f(4,74.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part
    glColor3ub(241,62,78);

    glVertex3f(33,58.5,0);
    glVertex3f(50.5,58.5,0);
    glVertex3f(50.5,71,0);
    glVertex3f(33,71,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part
    glColor3ub(182,47,68);

    glVertex3f(33,58.5,0);
    glVertex3f(50.5,58.5,0);
    glVertex3f(50.5,60.5,0);
    glVertex3f(33,60.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house red ar opore sada part
    glColor3ub(255,255,253);


    glVertex3f(33,71,0);
    glVertex3f(50.5,71,0);
    glVertex3f(50.5,72,0);
    glVertex3f(33,72,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house red ar opore sada part
    glColor3ub(209,223,232);


    glVertex3f(33,71.3,0);
    glVertex3f(50.5,71.3,0);
    glVertex3f(50.5,71.6,0);
    glVertex3f(33,71.6,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house red ar opore blue part
    glColor3ub(20,59,81);

    glVertex3f(32,72,0);
    glVertex3f(51.5,72,0);
    glVertex3f(46,75,0);
    glVertex3f(37,75,0);
    glEnd();



    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part sada window
    glColor3ub(255,255,255);

    glVertex3f(36,61.5,0);
    glVertex3f(47.5,61.5,0);
    glVertex3f(47.5,69,0);
    glVertex3f(36,69,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part blue window
    glColor3ub(19,59,82);

    glVertex3f(36.4,61.9,0);
    glVertex3f(47.1,61.9,0);
    glVertex3f(47.1,68.6,0);
    glVertex3f(36.4,68.6,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part blue window
    glColor3ub(255,255,255);

    glVertex3f(38.7,61.9,0);
    glVertex3f(39,61.9,0);
    glVertex3f(39,68.6,0);
    glVertex3f(38.7,68.6,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. New house red right part blue window
    glColor3ub(255,255,255);

    glVertex3f(44.4,61.9,0);
    glVertex3f(44.7,61.9,0);
    glVertex3f(44.7,68.6,0);
    glVertex3f(44.4,68.6,0);
    glEnd();


}

void road_1_cars()
{

// rood 1 1st car  started

// Begin Quads Shape. // car drow dikki
    quads_body(75,57,77,57,78,59,76,59,51,111,173);
// Begin Quads Shape. // car drow back glass
    quads_body(77,57,79,58,80,60,78,59,65,224,147);
// Begin Quads Shape. // car drow sad
    quads_body(79,58,84,58,85,60,80,60,2,169,159);
// Begin Quads Shape. // car drow font glass
    quads_body(84,58,86,57,87,59,85,60,65,224,147);
// Begin Quads Shape. // car drow engin
    quads_body(86,57,88,57,89,59,87,59,51,111,173);

// Begin Quads Shape. // car drow light
    quads_body(88,57,88,56,89,58,89,59,93,13,15);

// Begin Quads Shape. // car drow body 1 part
    quads_body(75,57,75,56,81,56,81,57,74,157,236);

// Begin Quads Shape. // car drow body 2 part

    quads_body(81,56,88,56,88,57,81,57,74,157,236);

// Begin Quads Shape. // car drow
    quads_body(77,57,86,57,84,58,79,58,0,0,0);
// Begin Quads Shape. // car caka back

    quads_body(77,55,78,55,79,56,76,56,0,0,0);
// Begin Quads Shape. // car caka front
    quads_body(84,55,85,55,86,56,83,56,0,0,0);



// rood 1 2nd car

// Begin Quads Shape. // car drow dikki
    quads_body(105,57,107,57,108,59,106,59,51,111,173);
// Begin Quads Shape. // car drow back glass
    quads_body(107,57,109,58,110,60,108,59,65,224,147);
// Begin Quads Shape. // car drow sad
    quads_body(109,58,114,58,115,60,110,60,2,169,159);
// Begin Quads Shape. // car drow font glass
    quads_body(114,58,116,57,117,59,115,60,65,224,147);
// Begin Quads Shape. // car drow engin
    quads_body(116,57,118,57,119,59,117,59,51,111,173);

// Begin Quads Shape. // car drow light
    quads_body(118,57,118,56,119,58,119,59,93,13,15);

// Begin Quads Shape. // car drow body 1 part
    quads_body(105,57,105,56,111,56,111,57,74,157,236);

// Begin Quads Shape. // car drow body 2 part

    quads_body(111,56,118,56,118,57,111,57,74,157,236);

// Begin Quads Shape. // car drow
    quads_body(107,57,116,57,114,58,109,58,0,0,0);
// Begin Quads Shape. // car caka back

    quads_body(107,55,108,55,109,56,106,56,0,0,0);
// Begin Quads Shape. // car caka front
    quads_body(114,55,115,55,116,56,113,56,0,0,0);


// rood 1 end

}


void road_2_cars()
{

// Begin Quads Shape. // car drow dikki
    quads_body(65,47,67,47,68,49,66,49,79,180,52);
// Begin Quads Shape. // car drow back glass
    quads_body(67,47,69,48,70,50,68,49,150,185,55);
// Begin Quads Shape. // car drow sad
    quads_body(69,48,74,48,75,50,70,50,176,217,63);
// Begin Quads Shape. // car drow font glass
    quads_body(74,48,76,47,77,49,75,50,221,190,65);
// Begin Quads Shape. // car drow engin
    quads_body(76,47,78,47,79,49,77,49,74,235,97);
// Begin Quads Shape. // car drow light
    quads_body(78,47,78,46,79,48,79,49,255,31,12);
// Begin Quads Shape. // car drow body 1 part
    quads_body(65,47,65,46,71,46,71,47,175,51,124);
// Begin Quads Shape. // car drow body 2 part
    quads_body(71,46,78,46,78,47,71,47,175,51,124);
// Begin Quads Shape. // car drow body 2 part
    quads_body(71,46,78,46,78,47,71,47,175,51,124);
// Begin Quads Shape. // car drow
    quads_body(67,47,76,47,74,48,69,48,35,33,36);
// Begin Quads Shape. // car caka back
    quads_body(67,45,68,45,69,46,66,46,0,0,0);
// Begin Quads Shape. // car caka front
    quads_body(74,45,75,45,76,46,73,46,0,0,0);


// rood 2 2nd car

// Begin Quads Shape. // car drow dikki
    quads_body(95,47,97,47,98,49,96,49,79,180,52);
// Begin Quads Shape. // car drow back glass
    quads_body(97,47,99,48,100,50,98,49,150,185,55);
// Begin Quads Shape. // car drow sad
    quads_body(99,48,104,48,105,50,100,50,176,217,63);
// Begin Quads Shape. // car drow font glass
    quads_body(104,48,106,47,107,49,105,50,221,190,65);
// Begin Quads Shape. // car drow engin
    quads_body(106,47,108,47,109,49,107,49,74,235,97);
// Begin Quads Shape. // car drow light
    quads_body(108,47,108,46,109,48,109,49,255,31,12);
// Begin Quads Shape. // car drow body 1 part
    quads_body(95,47,95,46,101,46,101,47,175,51,124);
// Begin Quads Shape. // car drow body 2 part
    quads_body(101,46,108,46,108,47,101,47,175,51,124);
// Begin Quads Shape. // car drow body 2 part
    quads_body(101,46,108,46,108,47,101,47,175,51,124);
// Begin Quads Shape. // car drow
    quads_body(97,47,106,47,104,48,99,48,35,33,36);
// Begin Quads Shape. // car caka back
    quads_body(97,45,98,45,99,46,96,46,0,0,0);
// Begin Quads Shape. // car caka front
    quads_body(104,45,105,45,106,46,103,46,0,0,0);


//rood 2 2nd car end

}


void road()
{



    glBegin(GL_QUADS); // Begin Quads Shape. Road start 1st part
    glColor3ub(71,71,71);

    glVertex3i(0,44,0);
    glVertex3i(3,42,0);
    glVertex3i(3,62,0);
    glVertex3i(0,64,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. Road start 2nd part
    glColor3ub(71,71,71);

    glVertex3i(3,42,0);
    glVertex3i(160,43,0);
    glVertex3i(160,62,0);
    glVertex3i(3,62,0);
    glEnd();



    glBegin(GL_QUADS); // Begin Quads Shape.Road yowoll
    glColor3ub(121,62,0);

    glVertex3i(3,51,0);
    glVertex3i(160,51,0);
    glVertex3i(160,54,0);
    glVertex3i(3,54,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. Road start holud
    glColor3ub(121,62,0);

    glVertex3i(0,53,0);
    glVertex3i(3,51,0);
    glVertex3i(3,54,0);
    glVertex3i(0,56,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. sada part
    glColor3ub(172,179,187);

    glVertex3f(3,52,0);
    glVertex3f(160,52,0);
    glVertex3f(160,53,0);
    glVertex3f(3,53,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. sada part 2
    glColor3ub(172,179,187);

    glVertex3i(0,54,0);
    glVertex3i(3,52,0);
    glVertex3i(3,53,0);
    glVertex3i(0,55,0);
    glEnd();

// rood one car code
    glPushMatrix();
    glTranslatef(xcar1,0,0);
    road_1_cars();
    glPopMatrix();


// rood 2 -------------------------------------------------------
    glPushMatrix();
    glTranslatef(xcar2,0,0);
    road_2_cars();
    glPopMatrix();
// rood 2 end



}

void human()
{

// Human

// human leftSite


    glPushMatrix();
    glTranslated(0,ygoalkeeperLeft,0);
    quads_body(72,20,73,20,73,21,72,21,255,31,12);
    glPopMatrix();


    glPushMatrix();
    glTranslated(xhumanLeft,0,0);
    quads_body(85,17,86,17,86,18,85,18,235,243,4);

    quads_body(95,17,96,17,96,18,95,18,0,219,238);
    quads_body(90,15,91,15,91,16,90,16,0,219,238);
    quads_body(82,12,83,12,83,13,82,13,0,219,238);

    quads_body(73,28,74,28,74,29,73,29,0,219,238);
    quads_body(71,24,72,24,72,25,71,25,0,219,238);

    quads_body(73,25,74,25,74,26,73,26,0,219,238);
    quads_body(71,20,72,20,72,21,71,21,0,219,238);

    quads_body(80,6,81,6,81,7,80,7,0,219,238);

    quads_body(92,32,93,32,93,33,92,33,0,219,238);

    glPopMatrix();

// human rightSite
    glPushMatrix();
    glTranslated(0,ygoalkeeperRight,0);
    quads_body(121,22,122,22,122,23,121,23,155,4,73);
    glPopMatrix();


    glPushMatrix();
    glTranslated(xhumanRight,0,0);
    quads_body(102,19,103,19,103,20,102,20,235,243,4);
    quads_body(110,21,111,21,111,22,110,22,235,243,4);
    quads_body(110,16,111,16,111,17,110,17,235,243,4);

    quads_body(116,32,117,32,117,33,116,33,0,219,238);

    quads_body(119,8,120,8,120,9,119,9,235,243,4);

    quads_body(111,8,112,8,112,9,111,9,235,243,4);

    quads_body(102,26,103,26,103,27,102,27,235,243,4);
    quads_body(106,30,105,30,105,31,106,31,235,243,4);
    glPopMatrix();

}

void play_ground()
{


    glBegin(GL_QUADS); // Begin Quads Shape. // math start
    glColor3ub(255,255,255);

    glVertex3f(63.5,1.5,0);
    glVertex3f(130.5,1.5,0);
    glVertex3f(130.5,41.5,0);
    glVertex3f(63.5,41.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // math start
    glColor3ub(103,171,60);

    glVertex3f(64,2,0);
    glVertex3f(130,2,0);
    glVertex3f(130,41,0);
    glVertex3f(64,41,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // math start
    glColor3ub(86,163,45);

    glVertex3f(68,2,0);
    glVertex3f(72,2,0);
    glVertex3f(72,41,0);
    glVertex3f(68,41,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(76,2,0);
    glVertex3f(80,2,0);
    glVertex3f(80,41,0);
    glVertex3f(76,41,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(84,2,0);
    glVertex3f(88,2,0);
    glVertex3f(88,41,0);
    glVertex3f(84,41,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(92,2,0);
    glVertex3f(96,2,0);
    glVertex3f(96,41,0);
    glVertex3f(92,41,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(100,2,0);
    glVertex3f(104,2,0);
    glVertex3f(104,41,0);
    glVertex3f(100,41,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(108,2,0);
    glVertex3f(112,2,0);
    glVertex3f(112,41,0);
    glVertex3f(108,41,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(116,2,0);
    glVertex3f(120,2,0);
    glVertex3f(120,41,0);
    glVertex3f(116,41,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(86,163,45);

    glVertex3f(124,2,0);
    glVertex3f(128,2,0);
    glVertex3f(128,41,0);
    glVertex3f(124,41,0);
    glEnd();



    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(65,3,0);
    glVertex3f(129,3,0);
    glVertex3f(129,3.5,0);
    glVertex3f(65,3.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(65,40,0);
    glVertex3f(129,40,0);
    glVertex3f(129,39.5,0);
    glVertex3f(65,39.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(65,3,0);
    glVertex3f(65.5,3,0);
    glVertex3f(65.5,40,0);
    glVertex3f(65,40,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(128.5,3,0);
    glVertex3f(129,3,0);
    glVertex3f(129,40,0);
    glVertex3f(128.5,40,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground mid sada part
    glColor3ub(255,255,255);

    glVertex3f(96.5,3,0);
    glVertex3f(97,3,0);
    glVertex3f(97,40,0);
    glVertex3f(96.5,40,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(65,15,0);
    glVertex3f(70,15,0);
    glVertex3f(70,15.5,0);
    glVertex3f(65,15.5,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(65,28,0);
    glVertex3f(70,28,0);
    glVertex3f(70,27.5,0);
    glVertex3f(65,27.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(69.5,15,0);
    glVertex3f(70,15,0);
    glVertex3f(70,28,0);
    glVertex3f(69.5,28,0);
    glEnd();




    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(124,15,0);
    glVertex3f(129,15,0);
    glVertex3f(129,15.5,0);
    glVertex3f(124,15.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(124,28,0);
    glVertex3f(129,28,0);
    glVertex3f(129,27.5,0);
    glVertex3f(124,27.5,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. // play ground
    glColor3ub(255,255,255);

    glVertex3f(124,15,0);
    glVertex3f(124.5,15,0);
    glVertex3f(124.5,28,0);
    glVertex3f(124,28,0);
    glEnd();

    human();

}

void swimming_poll_water_wave()
{



    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(9,8,0);
    glVertex3i(17,8,0);
    glVertex3f(17,8.3,0);
    glVertex3f(9,8.3,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(12,12,0);
    glVertex3i(22,12,0);
    glVertex3f(22,12.3,0);
    glVertex3f(12,12.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(24,20,0);
    glVertex3i(30,20,0);
    glVertex3f(30,20.3,0);
    glVertex3f(24,20.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(34,16,0);
    glVertex3i(39,16,0);
    glVertex3f(39,16.3,0);
    glVertex3f(34,16.3,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(28,26,0);
    glVertex3i(34,26,0);
    glVertex3f(34,26.3,0);
    glVertex3f(28,26.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(28,7,0);
    glVertex3i(34,7,0);
    glVertex3f(34,7.3,0);
    glVertex3f(28,7.3,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(20,37,0);
    glVertex3i(26,37,0);
    glVertex3f(26,37.3,0);
    glVertex3f(20,37.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(10,24,0);
    glVertex3i(16,24,0);
    glVertex3f(16,24.3,0);
    glVertex3f(10,24.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(14,30,0);
    glVertex3i(21,30,0);
    glVertex3f(21,30.3,0);
    glVertex3f(14,30.3,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(30,35,0);
    glVertex3i(38,35,0);
    glVertex3f(38,35.3,0);
    glVertex3f(30,35.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(32,47,0);
    glVertex3i(38,47,0);
    glVertex3f(38,47.3,0);
    glVertex3f(32,47.3,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(32,42,0);
    glVertex3i(38,42,0);
    glVertex3f(38,42.3,0);
    glVertex3f(32,42.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(14,40,0);
    glVertex3i(20,40,0);
    glVertex3f(20,40.3,0);
    glVertex3f(14,40.3,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. nodir deu
    glColor3ub(224,224,224);

    glVertex3i(10,46,0);
    glVertex3i(16,46,0);
    glVertex3f(16,46.3,0);
    glVertex3f(10,46.3,0);
    glEnd();


}


void swimming_poll_chair()
{



    glBegin(GL_QUADS); // Begin Quads Shape. chair nich parth
    glColor3ub(3,79,90);

    glVertex3i(41,40,0);
    glVertex3i(47,41,0);
    glVertex3i(47,45,0);
    glVertex3i(41,44,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. char oprer path
    glColor3ub(72,131,121);

    glVertex3i(47,41,0);
    glVertex3i(50,40,0);
    glVertex3i(50,44,0);
    glVertex3i(47,45,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. chair nich parth 2nd
    glColor3ub(3,79,90);

    glVertex3i(41,33,0);
    glVertex3i(47,34,0);
    glVertex3i(47,38,0);
    glVertex3i(41,37,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. char oprer path 2nd
    glColor3ub(72,131,121);

    glVertex3i(47,34,0);
    glVertex3i(50,33,0);
    glVertex3i(50,37,0);
    glVertex3i(47,38,0);
    glEnd();




    glBegin(GL_QUADS); // Begin Quads Shape. catar danda
    glColor3ub(72,131,121);

    glVertex3f(43,38.5,0);
    glVertex3f(49,38.9,0);
    glVertex3f(49,39.2,0);
    glVertex3f(43,39.5,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads cata oprer path

    glColor3ub(0,219,238);

    glVertex3i(48,32,0);
    glVertex3i(48,46,0);
    glVertex3f(53.5,39,0);
    glEnd();


// 2nd char


    glBegin(GL_QUADS); // Begin Quads Shape. chair nich parth
    glColor3ub(3,79,90);

    glVertex3i(41,20,0);
    glVertex3i(47,21,0);
    glVertex3i(47,25,0);
    glVertex3i(41,24,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. char oprer path
    glColor3ub(72,131,121);

    glVertex3i(47,21,0);
    glVertex3i(50,20,0);
    glVertex3i(50,24,0);
    glVertex3i(47,25,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. chair nich parth 2nd
    glColor3ub(3,79,90);

    glVertex3i(41,13,0);
    glVertex3i(47,14,0);
    glVertex3i(47,18,0);
    glVertex3i(41,17,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. char oprer path 2nd
    glColor3ub(72,131,121);

    glVertex3i(47,14,0);
    glVertex3i(50,13,0);
    glVertex3i(50,17,0);
    glVertex3i(47,18,0);
    glEnd();




    glBegin(GL_QUADS); // Begin Quads Shape. catar danda
    glColor3ub(72,131,121);

    glVertex3f(43,18.5,0);
    glVertex3f(49,18.9,0);
    glVertex3f(49,19.2,0);
    glVertex3f(43,19.5,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads cata oprer path

    glColor3ub(0,219,238);

    glVertex3i(48,12,0);
    glVertex3i(48,26,0);
    glVertex3f(53.5,19,0);
    glEnd();
}

void swimming_poll_tree()
{

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool tree
    glColor3ub(19,60,82);

    glVertex3i(18,51,0);
    glVertex3i(20,51,0);
    glVertex3i(21,53,0);
    glVertex3i(17,53,0);
    glEnd();


    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool tree
    glColor3ub(248,171,63);

    glVertex3i(17,55,0);
    glVertex3i(21,55,0);
    glVertex3f(19,53,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool tree
    glColor3ub(242,62,78);

    glVertex3i(17,55,0);
    glVertex3i(21,55,0);
    glVertex3f(19,57,0);
    glEnd();


    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool tree 2
    glColor3ub(19,60,82);

    glVertex3i(37,51,0);
    glVertex3i(39,51,0);
    glVertex3i(40,53,0);
    glVertex3i(36,53,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool tree 2
    glColor3ub(248,171,63);

    glVertex3i(36,55,0);
    glVertex3i(40,55,0);
    glVertex3f(38,53,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool tree 2
    glColor3ub(242,62,78);

    glVertex3i(36,55,0);
    glVertex3i(40,55,0);
    glVertex3f(38,57,0);
    glEnd();

}

void swimming_pool()
{

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool
    glColor3ub(11,171,249);

    glVertex3i(8,5,0);
    glVertex3i(40,5,0);
    glVertex3i(40,50,0);
    glVertex3i(8,50,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool
    glColor3ub(29,213,246);

    glVertex3i(9,6,0);
    glVertex3i(39,6,0);
    glVertex3i(39,49,0);
    glVertex3i(9,49,0);
    glEnd();


// swimming poll water wave
    swimming_poll_water_wave();

    swimming_poll_tree();

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool lamp
    glColor3ub(19,60,82);

    glVertex3i(48,50,0);
    glVertex3i(49,50,0);
    glVertex3i(49,56,0);
    glVertex3i(48,56,0);
    glEnd();


    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool lamp 1st part
    glColor3ub(248,171,63);

    glVertex3i(47,57,0);
    glVertex3i(50,57,0);
    glVertex3f(48.5,55,0);
    glEnd();

    circle(48.5,57.5,1,50,248,171,63);

//lamp 2 start
    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool lamp
    glColor3ub(19,60,82);

    glVertex3i(6,50,0);
    glVertex3i(7,50,0);
    glVertex3i(7,56,0);
    glVertex3i(6,56,0);
    glEnd();


    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool lamp 1st part
    glColor3ub(248,171,63);

    glVertex3i(5,57,0);
    glVertex3i(8,57,0);
    glVertex3f(6.5,55,0);
    glEnd();

    circle(6.5,57.5,1,50,248,171,63);
    circle(48.5,57.5,1,50,248,171,63);


//tube swimming pool
// tube one
    glPushMatrix();
    glTranslated(xtube1,0,0);
    circle(15,14,3.5,50,227,170,201);
    circle(15,14,2.5,50,17,147,216);
    circle(15,14,2,50,140,212,237);
    glPopMatrix();

    //tube two

    glPushMatrix();
    glTranslated(0,ytube2,0);
    circle(25,25,3.5,50,227,170,201);
    circle(25,25,2.5,50,17,147,216);
    circle(25,25,2,50,140,212,237);
    glPopMatrix();

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool sirir hat start
    glColor3ub(170,164,155);

    glVertex3i(24,50,0);
    glVertex3f(24.5,50,0);
    glVertex3f(24.5,54,0);
    glVertex3i(24,54,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool siris hat 2
    glColor3ub(170,164,155);

    glVertex3i(32,50,0);
    glVertex3f(32.5,50,0);
    glVertex3f(32.5,54,0);
    glVertex3i(32,54,0);
    glEnd();

    circle(24.2,54.5,.6,50,170,164,155);
    circle(32.2,54.5,.6,50,170,164,155);



    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool siri
    glColor3ub(147,196,199);

    glVertex3i(24,50,0);
    glVertex3i(32,50,0);
    glVertex3i(32,48,0);
    glVertex3i(24,48,0);
    glEnd();



    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool
    glColor3ub(147,196,199);

    glVertex3i(26,48,0);
    glVertex3i(34,48,0);
    glVertex3i(34,46,0);
    glVertex3i(26,46,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape. swimming pool
    glColor3ub(147,196,199);

    glVertex3i(28,46,0);
    glVertex3i(36,46,0);
    glVertex3i(36,44,0);
    glVertex3i(28,44,0);
    glEnd();




    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool lamp 2nd part
    glColor3ub(248,171,63);

    glVertex3i(47,57,0);
    glVertex3i(50,57,0);
    glVertex3f(48.5,59.5,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape. swimming pool 2nd lamp 2nd part
    glColor3ub(248,171,63);

    glVertex3i(5,57,0);
    glVertex3i(8,57,0);
    glVertex3f(6.5,59.5,0);
    glEnd();


    circle(6.5,57.5,1.2,50,248,171,63);
    circle(48.5,57.5,1.2,50,248,171,63);


// swimming pool chair
    swimming_poll_chair();


}


void home()
{



    glBegin(GL_QUADS); // Begin Quads Shape. poll side
    glColor3ub(209,223,232);
    quads(3,3,52,3,52,67,3,67);
    glEnd();





    glBegin(GL_QUADS); // back site back shape.
    glColor3ub(0,0,0);

    glVertex3i(3,3,0);
    glVertex3i(4,3,0);
    glVertex3i(4,67,0);
    glVertex3i(3,67,0);
    glEnd();

    glBegin(GL_QUADS); // back site back shape.
    glColor3ub(0,0,0);

    glVertex3i(51,3,0);
    glVertex3i(52,3,0);
    glVertex3i(52,67,0);
    glVertex3i(51,67,0);
    glEnd();




    glBegin(GL_QUADS); // Begin Quads Shape.
    glColor3ub(0,0,0);

    glVertex3i(3,3,0);
    glVertex3i(52,3,0);
    glVertex3i(52,4,0);
    glVertex3i(3,4,0);
    glEnd();

    glBegin(GL_QUADS); // Begin Quads Shape.
    glColor3ub(0,0,0);

    glVertex3i(3,66,0);
    glVertex3i(52,66,0);
    glVertex3i(52,67,0);
    glVertex3i(3,67,0);
    glEnd();


    house_backsite_tree();
    house();


    swimming_pool();




}


void road_left_site_part()
{


    glBegin(GL_TRIANGLES); // Begin Quads Shape.Road hill
    glColor3ub(119,192,189);

    glVertex3i(60,62,0);
    glVertex3i(68,62,0);
    glVertex3f(64,67,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(159,211,205);

    glVertex3i(64,62,0);
    glVertex3i(78,62,0);
    glVertex3f(71,67,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(73,159,172);

    glVertex3i(75,62,0);
    glVertex3i(84,62,0);
    glVertex3f(79,65,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(153,179,216);

    glVertex3i(82,62,0);
    glVertex3i(92,62,0);
    glVertex3f(87,68,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(159,211,205);

    glVertex3i(90,62,0);
    glVertex3i(100,62,0);
    glVertex3f(95,65,0);
    glEnd();

    glBegin(GL_TRIANGLES); // Begin Quads Shape.
    glColor3ub(161,180,242);

    glVertex3i(98,62,0);
    glVertex3i(106,62,0);
    glVertex3f(102,68,0);
    glEnd();

// here tree function declare the tree function for display all tree
    tree();


}

void river_right_site_part()
{


    top_hill();
    glBegin(GL_QUADS); // Begin Quads Shape. // pilar
    glColor3ub(255,255,255);

    glVertex3f(61.5,78,0);
    glVertex3f(62.8,78,0);
    glVertex3f(62.2,90,0);
    glVertex3f(61.8,90,0);
    glEnd();

    circle(62,90.8,.6,50,255,255,255); // pilar circle

    glBegin(GL_QUADS); // Begin Quads Shape. // pilar
    glColor3ub(255,255,255);
    glVertex3f(99.5,78,0);
    glVertex3f(100.8,78,0);
    glVertex3f(100.2,90,0);
    glVertex3f(99.8,90,0);
    glEnd();

    circle(100,90.8,.6,50,255,255,255);



}

void screen()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(72,158,13);
    quads(0,0,160,0,160,150,0,150);
    glEnd();

}


void moving_animations()
{
    // cloud move
    if(xcloud<=120)
    {

        xcloud+=0.01;
    }
    else
    {
        xcloud=-120;
    }

    // boat move
    if(xboat >= -120)
        xboat-=0.02;
    else
        xboat=+120;

    // car one move
    if(xcar1<=120)
        xcar1+=0.06;
    else
        xcar1=-120;

    // car two move
    if(xcar2 >= -120)
        xcar2-=0.06;
    else
        xcar2=+120;

    // swimming pool tube 1 move x axis
    if(xtube1<=20)
        xtube1+=0.001;
    else
        xtube1=-3;

    // swimming pool tube 2 move y axis
    if(ytube2<=18)
        ytube2+=0.001;
    else
        ytube2=-2;

    // xhumanLeft move

    if(xhumanLeft<=26)
        xhumanLeft+=0.007;
    else
        xhumanLeft=3;

    glutPostRedisplay();

    //xhumanRight move
    if(xhumanRight >= -28)
        xhumanRight-=0.007;
    else
        xhumanRight=0;

    // ygoalkeeperLeft move y axis
    if(ygoalkeeperLeft<=5)
        ygoalkeeperLeft+=0.009;
    else
        ygoalkeeperLeft=-3;

    // ygoalkeeperRight move y axis
    if(ygoalkeeperRight>=-5)
        ygoalkeeperRight-=0.009;
    else
        ygoalkeeperRight=3;

glutPostRedisplay();

}



void display(void)
{
    screen();
    sky();
    river();
    road();
    river_right_site_part();
    home();
    road_left_site_part();
    play_ground();

    glFlush ();
}


void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 140, 0, 100, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Dream City | Computer Graphics Project");
    init ();
    glutDisplayFunc(display);
    glutIdleFunc(moving_animations);
    glutMainLoop();
    return 0;
}

