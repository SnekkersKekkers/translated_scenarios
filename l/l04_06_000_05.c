switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600005_06_000");
    MsgDisp("Himuro","Handmade chocolate, huh.
You're setting the bar high.");
    MsgDisp("主人公","I tried doing my best!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600005_06_010");
    MsgDisp("Himuro","......Ah.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600005_06_020");
    MsgDisp("Himuro","Well, it's fine.
I shouldn't be picky about a gift. 
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Could it be that I put
something in he doesn't like?)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600005_06_030");
    MsgDisp("Himuro","Hm, handmade?");
    MsgDisp("主人公","Yeah, I did my best!");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600005_06_040");
    MsgDisp("Himuro","I see that.
But, maybe you should've tried just
a little harder.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600005_06_050");
    MsgDisp("Himuro","If you want to make someone 100%
happy, maybe you should find out
their preferences.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Could it be that I put
something in he doesn't like?)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600005_06_060");
    MsgDisp("Himuro","Handmade, huh.
Thanks.");
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,0);
    VoicePlay("L040600005_06_070");
    MsgDisp("Himuro","Ah.");
    MsgDisp("主人公","What is it?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1,1);
    VoicePlay("L040600005_06_080");
    MsgDisp("Himuro","Nah, nothing.
Don't worry about it.");
    MsgDisp("主人公","But......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600005_06_090");
    MsgDisp("Himuro","In any case, I'll be taking this.
Even if you ask for it back, I won't
return it.");
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,2);
    VoicePlay("L040600005_06_100");
    MsgDisp("Himuro","......I'll try this.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Could it be that I put
something in he doesn't like?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
