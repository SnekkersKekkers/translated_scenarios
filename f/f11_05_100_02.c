BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("F110510002_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","Oh, ｛柊＊＊＊｝. Information desk this
year?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F110510002_05_010");
MsgDisp("Hiiragi","Yes, because there is a lot of data this
year.
Give me your request, please.");
SEPlay("EV_SE_FOOT_WALK_COME_TWO",0,0.6);
SEWait();
ChEye(5,3);
ChMouth(5,2);
VoicePlay("F110510002_45_000");
MsgDisp("Woman Customer A","Clerk-san, 
Where's the tastiest yakisoba?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F110510002_05_020");
MsgDisp("Hiiragi","If you want a royal sauce, there is the
baseball club's traditional Habataki High
Sauce yakisoba.");
VoicePlay("F110510002_47_000");
MsgDisp("Woman Customer B","Huh, is it really royal?
I'll try going there now.");
ChEye(5,4);
ChEyeOpenLevel(5,0);
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
SEWait();
MsgDisp("主人公","Amazing... ");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510002_05_030");
MsgDisp("Hiiragi","Yes. I would also recommend the Tennis
club's salt yakisoba.");
MsgDisp("主人公","Woah, it looks delicious.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510002_05_040");
MsgDisp("Hiiragi","When the student council duties end, would
you like to go together?");
MsgDisp("主人公","Yes, please.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F110510002_05_050");
MsgDisp("Hiiragi","Understood.
I will see you then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(The yakisoba ｛柊＊＊＊｝ recommends
sound good... Since it's our last year I
have to wonder about the royal sauce
yakisoba.)");
MsgClose();
ScrFadeOut(0,0);
