BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......｛風真＊＊｝ said he
wanted to talk to me on the way home.
......I wonder what could it be?)");
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
MsgDisp("主人公","That's right, you said you had something
you wanted to talk to me about, right?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101001_01_000");
MsgDisp("Kazama","Yeah, you remember how we went ice skating
before?");
MsgDisp("主人公","Yeah, that was fun, huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110101001_01_010");
MsgDisp("Kazama","It's been a long time since we held hands
so naturally like that.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110101001_01_020");
MsgDisp("Kazama","We were in the same class, lived in the
same neighbourhood, and were super close,
but on the contrary, it was difficult to
find a good time to hold hands.");
MsgDisp("主人公","Hehe, that might be true.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110101001_01_030");
MsgDisp("Kazama","I was happy that you were always so close
though?");
ChMotion(1,0);
MsgDisp("主人公","(I wonder if ｛風真＊＊｝ wants
to hold hands more......)");
while (1){
    RunEverydaySksp(1,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(1,1);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("G110101001_01_070");
    MsgDisp("Kazama","My hands aren't there.");
    ChEye(1,0);
    ChMouth(1,0);
    }
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110101001_01_080");
MsgDisp("Kazama","Yeah, that's right.
IT's natural now.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101001_01_090");
MsgDisp("Kazama","Hey, let's hold hands whilst walking home.");
MsgDisp("主人公","Y-Yeah.......");
MsgDisp("主人公","(So he wanted to hold hands after
all......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
