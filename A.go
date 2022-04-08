package main
import "fmt"

func main() {
    var t int;
    var MAX_T int;
    t = 0;
    fmt.Scanf("%d", &MAX_T);
    for t < MAX_T {
        var r int;
        var c int;
        fmt.Scanf("%d %d", &r, &c);
        r = 2*r+1;
        c = 2*c+1;

        grid := [][]string{{"+", "-"}, {"|", "."}};

        fmt.Printf("Case #%d:\n", t+1); t++;
        for i := 0; i < r; i++ {
            for j := 0; j < c; j++ {
                if i<2 && j<2 {
                    fmt.Print(".");
                } else {
                    fmt.Print(grid[i%2][j%2]);
                }
            }
            fmt.Println();
        }
    }
}