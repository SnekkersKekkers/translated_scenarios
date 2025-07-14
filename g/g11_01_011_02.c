BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......｛風真＊＊｝ said he
had something he wanted to talk to me
about on the way home ......I wonder what
it is?)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, that's right, what did you want to
talk to me about?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101102_01_000");
MsgDisp("Kazama","Ah, right.
Apparently a customer from Simon called
for you?");
MsgDisp("主人公","Really? I'm happy.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101102_01_010");
MsgDisp("Kazama","It's difficult to win the trust of your
customers.
That's amazing.");
MsgDisp("主人公","Yes, thank you.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110101102_01_020");
MsgDisp("Kazama","However, I am worried that it's only male
customers.");
MsgDisp("主人公","Eh......");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("G110101102_01_030");
MsgDisp("Kazama","So here's a suggestion.
Why don't you just work the same shift as
me all the time?");
MsgDisp("主人公","(Umm......how would that go?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
