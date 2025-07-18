BGMStop();
BGOpen("sc810",0);
ChLayout(2);
MsgClose();
ChOpen(1,254,0,0,3,#1,#1,0,0,0,30);
ChOpen(3,254,0,0,0,#1,#1,0,1,0,30);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Phew!
Time flies...
It was so much fun.");
ChMouth(1,3);
VoicePlay("Q080B00100_01_000");
MsgDisp("Kazama","Sure was.
Oh yeah, Nanatsumori.");
ChEye(4,3);
ChMotion(4,1,1);
VoicePlay("Q080B00100_04_000");
MsgDisp("Nanatsumori","Sup?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("Q080B00100_01_010");
MsgDisp("Kazama","Share today's photo when you get back to
your room.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q080B00100_04_010");
MsgDisp("Nanatsumori","So you want a picture after all?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("Q080B00100_01_020");
MsgDisp("Kazama","Ugh, yes. ...please.");
MsgDisp("主人公","Hehe, mee too!");
ChMouth(1,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("Q080B00100_03_000");
MsgDisp("Honda","Me too, me too!
I wanna see everyone's smiling pictures, I
want to see them.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("Q080B00100_04_020");
MsgDisp("Nanatsumori","Np, I'll select the good ones.");
ChEye(1,0);
ChMouth(1,3);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q080B00100_03_010");
MsgDisp("Honda","Yay!
We're all going together for the next free
period too, right?");
ChMotion(4,0,1);
VoicePlay("Q080B00100_04_030");
MsgDisp("Nanatsumori","No objection.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("Q080B00100_01_030");
MsgDisp("Kazama","I mean, I'm good with it.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("Q080B00100_04_040");
MsgDisp("Nanatsumori","But?");
ChMouth(1,2);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
VoicePlay("Q080B00100_03_020");
MsgDisp("Honda","Oh, okay.
You can be the leader on the last day!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("Q080B00100_01_040");
MsgDisp("Kazama","What?
That's not what I meant...");
MsgDisp("主人公","Well, I'll see you at this place the
morning after tomorrow.");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("Q080B00100_01_050");
MsgDisp("Kazama","Wait a minute.
What's a leader supposed to do?");
MsgDisp("主人公","(Hehe!
I'm can't wait for the free day after
tomorrow!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChClose(1,0,0);
ChClose(4,0,0);
