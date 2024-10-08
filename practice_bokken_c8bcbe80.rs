#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

fn main() {
    let mut rect = Rectangle {
        width: 30,
        height: 50,
    };

    println!("{rect:?}");
    println!("{rect:#?}");
    dbg!(&rect);
    rect = dbg!(rect); // take ownership, return ownership :)
    dbg!(rect); // take ownership
                // dbg!(rect); // error if uncommented
}
