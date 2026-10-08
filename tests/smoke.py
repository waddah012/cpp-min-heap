"""Compile separately with make; exercise representative console behavior."""
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]
CASES = [('', '2 4 8 12 6 10')]
for input_text, expected in CASES:
    result = subprocess.run([str(ROOT / "build/example")], input=input_text,
                            text=True, capture_output=True, timeout=5, check=True)
    assert expected in result.stdout, f"Expected {expected!r} in output: {result.stdout}"
print(f"Passed {len(CASES)} smoke checks.")
