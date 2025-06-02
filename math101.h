
//.Point
typedef struct{
  float x,y;
}point;

point p(float x,float y){

  point p;
  p.x=x;
  p.y=y;
  return p;
}

// point addition
point padd(point a,point b){point result={a.x+b.x,a.y+b.y};return result;}

//. Vector
typedef struct{
  float x,y; 
} vector;

vector v2(float x,float y){

  vector p;
  p.x=x;
  p.y=y;
  return p;
}

// vector addition
vector add(vector a,vector b){vector result = {a.x+b.x,a.y+b.y};return result;}
// vector subtraction
vector sub(point a,point b){vector result ={a.x-b.x,a.y-b.y}; return result;}
// Vector+Point =Point translated int the direction of the vector 
point vaddp(vector v,point p){ point result ={v.x+p.x,v.y+p.y} ;  return result;}
vector smulv(vector v,float a){vector result = {v.x*a,v.y*a};return result;}


typedef struct{
  vector max;
  vector min;
}aabb;


float width(aabb box){return box.max.x-box.min.x;}
float height(aabb box){return box.max.y-box.min.y;}

vector mid(aabb box){return smulv((add(box.min,box.max)),0.5f);}




