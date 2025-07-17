MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110201_01_000");
MsgDisp("Kazama","This view...is amazing, huh.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110201_01_010");
MsgDisp("Kazama","Even though it's close to the city, it's
like many miracles came together.
It's a special place.");
MsgDisp("主人公","That's right.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020110201_01_020");
MsgDisp("Kazama","We're the same, you know?
A lot of miracles came together for us to
be here.");
MsgDisp("主人公","Hehe, yeah.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110201_01_030");
MsgDisp("Kazama","...Hey, do you think we are becoming a
pair worthy of such a special place?");
MsgDisp("主人公","｛風真＊＊｝ is special,
though?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020110201_01_040");
MsgDisp("Kazama","There it is.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110201_01_050");
MsgDisp("Kazama","You're going to say something like
'childhood friends and classmates', right?
It's a miracle, but also a coincidence.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020110201_01_060");
MsgDisp("Kazama","But from now on, we can't just wait.
We have to go and get it ourselves, right?");
MsgDisp("主人公","Umm...?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("G020110201_01_070");
MsgDisp("Kazama","Next time, I'll come to you after I've
achieved something special for you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("G020110201_01_080");
MsgDisp("Kazama","I guess, this is my freedom to declare it.");
MsgDisp("主人公","(Somewhat, I feel like I just heard
something quite significant.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
