struct Rectangle {
    width: u32,
    height: u32,
}

fn main() {
    let rect = Rectangle {
        width: 30,
        height: 50,
    };

    let area = area(&rect); // area and area :)
    println!("The area of the rectangle is {area} square pixels.");
}

fn area(rectangle: &Rectangle) -> u32 {
    rectangle.width * rectangle.height
}
