vector get_non_collinear_vec(int geo, start_pt; float collinear_threshold; vector normal)
{
    vector test_vector;
    int max_pts = npoints(geo) - 1;

    for (int i=start_pt; i < max_pts; i++){
        test_vector = normalize(point(1, "P", i) - point(0, "P", 0));
        if ( 1 - abs(dot(normal, test_vector)) > collinear_threshold){
            @test_vector = normalize(cross(normal, test_vector));
            break;
        }
    }
    return test_vector;
}





/*
@N = normalize(point(1, "P", 1) - @P);

int pt = 2;
vector test_vector;
int max_pts = npoints(1) - 1;
float collinear_threshold = ch("collinear");

for (int i=pt; i < max_pts; i++){
    test_vector = normalize(point(1, "P", i) - @P);
    if ( 1 - abs(dot(@N, test_vector)) > collinear_threshold){
        @up = normalize(cross(@N, test_vector));
        i@pt = i;
        break;
    }
}
*/