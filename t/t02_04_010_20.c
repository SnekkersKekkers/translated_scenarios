ChEye(4,4);
ChMouth(4,4);
MsgDisp("主人公","Yes...!
I also like ｛七ツ森＊｝.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,8);
VoicePlay("T020401000_04_130");
MsgDisp("Nanatsumori","...Thank you.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
ChCheek(4,0);
VoicePlay("T020401000_04_140");
MsgDisp("Nanatsumori","Haa...
That was probably the most nervous I've
ever been in my life.");
MsgDisp("主人公","Hehe.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020401000_04_150");
MsgDisp("Nanatsumori","...That.
When you make that face, everything turns
into happiness.");
ChMotion(4,2,1);
ChEyeOpenLevel(4,0);
VoicePlay("T020401000_04_160");
MsgDisp("Nanatsumori","Ahー, if I get any happier, I might break
down.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
ChEyeOpenLevel(4,10);
VoicePlay("T020401000_04_170");
MsgDisp("Nanatsumori","Hmm...
I see.
I don't have to hold back anymore.");
ChEye(4,0);
ChMouth(4,3);
MsgDisp("主人公","Eh...");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("T020401000_04_180");
MsgDisp("Nanatsumori","｛主人公｝.
I love you the most in this world.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
