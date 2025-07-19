<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Success Us - Academic Help You Can Trust</title>
  <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;600&display=swap" rel="stylesheet">
  <style>
    * {
      box-sizing: border-box;
      scroll-behavior: smooth;
    }

    body {
      font-family: 'Inter', sans-serif;
      margin: 0;
      background: #f8f9fa;
      color: #333;
      line-height: 1.6;
    }

    header {
      background-color: #1d3557;
      color: #fff;
      padding: 3rem 2rem;
      text-align: center;
    }

    header h1 {
      margin: 0;
      font-size: 2.5rem;
    }

    nav {
      background: #457b9d;
      display: flex;
      justify-content: center;
      gap: 2rem;
      padding: 1rem;
      flex-wrap: wrap;
    }

    nav a {
      color: white;
      text-decoration: none;
      font-weight: 600;
      transition: color 0.3s ease;
    }

    nav a:hover {
      color: #ffcc00;
    }

    section {
      padding: 3rem 10%;
      background-color: #ffffff;
      margin-bottom: 1rem;
      border-radius: 8px;
      box-shadow: 0 2px 8px rgba(0,0,0,0.05);
    }

    h2 {
      color: #1d3557;
      font-size: 1.8rem;
      margin-bottom: 1rem;
    }

    ul {
      padding-left: 1.5rem;
    }

    .contact form {
      display: flex;
      flex-direction: column;
      max-width: 600px;
      margin-top: 1rem;
    }

    .contact input, .contact textarea {
      padding: 1rem;
      margin-bottom: 1rem;
      border: 1px solid #ccc;
      border-radius: 5px;
      font-size: 1rem;
    }

    .contact button {
      background-color: #1d3557;
      color: white;
      padding: 1rem;
      border: none;
      font-weight: bold;
      cursor: pointer;
      border-radius: 5px;
      transition: background-color 0.3s ease;
    }

    .contact button:hover {
      background-color: #0b2541;
    }

    footer {
      background-color: #1d3557;
      color: white;
      text-align: center;
      padding: 1rem;
      font-size: 0.9rem;
    }

    @media (max-width: 768px) {
      nav {
        flex-direction: column;
        gap: 0.8rem;
      }

      section {
        padding: 2rem 5%;
      }
    }
  </style>
</head>
<body>

<header>
  <h1>Success Us</h1>
  <p>Professional Academic Support for Assignments, Projects, Exams & Essays</p>
</header>

<nav>
  <a href="#about">About</a>
  <a href="#services">Services</a>
  <a href="#why">Why Us</a>
  <a href="#contact">Contact</a>
</nav>

<section id="about">
  <h2>About Us</h2>
  <p>Success Us is a team of experienced professionals offering personalized assistance with assignments, exams, projects, and essays. Whether you're a high school, college, or university student, we help you meet deadlines and excel academically while maintaining originality and confidentiality.</p>
</section>

<section id="services">
  <h2>Our Services</h2>
  <ul>
    <li>Assignment Writing & Help (All Subjects)</li>
    <li>Essay Writing – APA, MLA, Harvard, etc.</li>
    <li>Take-Home Exams & Online Tests</li>
    <li>Research & Capstone Projects</li>
    <li>Plagiarism-Free & Confidential Work</li>
  </ul>
</section>

<section id="why">
  <h2>Why Choose Success Us?</h2>
  <ul>
    <li>100% Confidential & Secure Services</li>
    <li>Experienced Writers and Subject Experts</li>
    <li>Timely Delivery – Even Urgent Orders</li>
    <li>Affordable Pricing with Free Revisions</li>
    <li>High Quality with Turnitin Reports on Request</li>
  </ul>
</section>

<section id="contact" class="contact">
  <h2>Contact Us</h2>
  <form action="https://formspree.io/f/YOUR_FORM_ID" method="POST">
    <input type="text" name="name" placeholder="Your Name" required />
    <input type="email" name="email" placeholder="Your Email" required />
    <textarea name="message" rows="5" placeholder="How can we help you?" required></textarea>
    <button type="submit">Submit Inquiry</button>
  </form>
</section>

<footer>
  <p>&copy; 2025 Success Us | Academic Excellence Starts Here</p>
</footer>

</body>
</html>