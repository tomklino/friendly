use std::env;

fn sum_devidors(victim: i64) -> i64 {
  let mut sum: i64 = 1;
  let mut i: i64 = 2;
  while i*i <= victim {
    if victim % i == 0 {
      sum = sum + i;
      sum = sum + (victim / i);
    }
    i = i + 1;
  }
  return sum;
}

fn main() {
  let args: Vec<String> = env::args().collect();
  let top: i64 = args[1].parse::<i64>().unwrap();
  println!("top is {}", top);
  let mut mate: i64;
  for candidate in 1i64..top {
    mate = sum_devidors(candidate);
    if mate <= candidate {
      continue;
    }
    if sum_devidors(mate) == candidate {
      println!("{},{}", candidate, mate);
    }
  }
}
