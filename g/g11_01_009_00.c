BGOpen("sc510",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......｛風真＊＊｝ said he had
something he wanted to talk to me about.
......I wonder if something happened?)");
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
ChOpen(1,100,0,0,0,8,-1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_084");
Wait(100,0);
VoicePlay("G110100900_01_000");
MsgDisp("Kazama","It's chilly, huh.
Sorry about the cold. 
Let's continue anyway.");
MsgDisp("主人公","Y-yeah. Was there something you wanted to
talk about?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100900_01_010");
MsgDisp("Kazama","I had something to say... But the 
moment we sat next to each other 
in the cold, it totally slipped my mind.");
MsgDisp("主人公","Eh?");
MsgDisp("主人公","(｛風真＊＊｝, your hands. They look really
cold. They're even shivering a little.)");
while (1){
    RunEverydaySksp(1,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("G110100900_01_020");
    MsgDisp("Kazama","Haaー......");
    ChEyeOpenLevel(1,-1);
    }
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100900_01_060");
MsgDisp("Kazama","Ah, thank youー. Please pull me. My body
has gone stiff and I can't stand up.");
MsgDisp("主人公","Ehhー?　Geez, let's go.
Here goes——");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,2);
VoicePlay("G110100900_01_070");
MsgDisp("Kazama","Ookay......");
SEPlay("EV_SE_645",0.3,0.5);
Wait(15,0);
ChClose(1,0,30);
VoicePlay("G110100900_01_080");
MsgDisp("Kazama","Uwah∋");
MsgDisp("主人公","Wah!");
SEPlay("EV_SE_645");
SEPlay("EV_SE_697",0,0.5);
Wait(20,0);
ScrQuake(1);
MsgClose();
SEPlay("EV_SE_647",0,0.8);
Wait(10,0);
ChOpen(1,100,0,2,0,-1,-1,0,0,0,30);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100900_01_090");
MsgDisp("Kazama","Somehow, I feel warmer?");
MsgDisp("主人公","Eh, really?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
