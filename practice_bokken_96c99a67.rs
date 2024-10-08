fn first_word(s: &String) -> &str {
    let bytes = s.as_bytes();

    for (index, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return &s[..index];
        }
    }

    &s[..]
}

fn main() {
    let mut s = String::from("Hello, World!");

    // `word` is immutably borrowed from `s`
    let word = first_word(&s);

    // `s` is mutable borrow here, which conflicts with the immutable borrow of `word`
    // s.clear(); // error if uncommented

    // The immutably borrowed `word` is used here.
    println!("The first word is: {word}");
}
