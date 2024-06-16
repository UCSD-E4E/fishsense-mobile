// use fishsense::add;

#[no_mangle]
pub extern fn add2(left: usize, right: usize) -> usize {
    left + right
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add2(2, 2);
        assert_eq!(result, 4);
    }
}
