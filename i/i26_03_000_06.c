BGOpen("ar600",0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    MsgDisp("主人公","Phew...
Sorry I'm late!");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,0,4,0,#1,#1,0,0);
    VoicePlay("I260300000_03_640");
    MsgDisp("Honda","We told you that you had a shift today,
right? It's not like you to forget, did
something happen?");
    MsgDisp("主人公","No, it was my mistake.
I'll come right away.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_650");
    MsgDisp("Honda","Everyone makes mistakes, so I'll look
forward to you improving in the future.");
    MsgDisp("主人公","(Haa, I caused trouble for them...
Like ｛本多＊＊｝ said, I'll make
sure I improve!)");
    break ;
    case 4:
    case 5:
    VoicePlay("I260300000_55_000");
    VoicePlay("I260300006_33_000");
    MsgDisp("Male Customer","Huh, you don't have it even though I
reserved it?");
    MsgDisp("主人公","My apologies!");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,0,0,4,#1,#1,0,0);
    VoicePlay("I260300000_03_660");
    MsgDisp("Honda","What happened?");
    MsgDisp("主人公","I gave the item they ordered to someone
else by accident...");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_670");
    MsgDisp("Honda","...What's the title?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_680");
    MsgDisp("Honda","Please wait here a moment, sir.
I'll go check in the back.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChOpen(3,35,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(3,0,1);
    MsgDisp("主人公","I apologize for taking up so much of your
time!");
    VoicePlay("I260300000_55_010");
    VoicePlay("I260300006_33_010");
    MsgDisp("Male Customer","It's fine.
I bought it in the end.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_690");
    MsgDisp("Honda","Thank you very much!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_700");
    MsgDisp("Honda","...Phew, thank goodness.
We still had it in stock.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_710");
    MsgDisp("Honda","But, it's unexpected of you.
Selling a reserved item to someone else.
Was your mind wandering?");
    MsgDisp("主人公","Ugh...maybe.
I'm sorry...");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_720");
    MsgDisp("Honda","Then, here!
Take this.");
    MsgDisp("主人公","Hm...canned coffee?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_730");
    MsgDisp("Honda","Yeah.
One of caffeine's effects is clearing a
foggy mind.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_740");
    MsgDisp("Honda","Take a break while you can and go clear
your mind!
...Got it?");
    MsgDisp("主人公","Yeah, thanks.");
    MsgDisp("主人公","(I caused trouble for
｛本多＊＊｝...I'll have to make
sure not to make this mistake again!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
