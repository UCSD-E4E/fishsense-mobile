/// Extension on DateTime for formatting
extension DateTimeExtensions on DateTime {
  /// Format date for display - equivalent to iOS dateFormatter
  String toDisplayString() {
    final months = [
      'Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun',
      'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'
    ];
    
    final day = this.day;
    final month = months[this.month - 1];
    final year = this.year;
    final hour = this.hour;
    final minute = this.minute.toString().padLeft(2, '0');
    final ampm = hour >= 12 ? 'PM' : 'AM';
    final displayHour = hour > 12 ? hour - 12 : (hour == 0 ? 12 : hour);
    
    return '$month $day, $year at $displayHour:$minute $ampm';
  }
}

