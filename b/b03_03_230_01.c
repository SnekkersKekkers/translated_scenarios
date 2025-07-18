BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030323001_03_000");
MsgDisp("Honda","Alright, what should we do?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.","Shall we enter the haunted house?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B030323001_03_010");
    MsgDisp("Honda","Sounds good, they say you have to get used
to it, right?
Let's go!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr420",0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    ScrFadeIn(0);
    VoicePlay("B030323001_03_020");
    MsgDisp("Honda","I'm full of energy today!");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B030323001_03_030");
    MsgDisp("Honda","Sure, it's popular with girls.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr430",0);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    ScrFadeIn(0);
    VoicePlay("B030323001_03_040");
    MsgDisp("Honda","They say it's just 15 minutes in the air,
but we're trapped in here.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B030323001_03_050");
    MsgDisp("Honda","I'm meeting your challenge, alright?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr440",0);
    MsgDispSksp(1,0);
    ChEye(3,5);
    ChMouth(3,1);
    ChMotion(3,5);
    ScrFadeIn(0);
    VoicePlay("B030323001_03_060");
    MsgDisp("Honda","W-Wait up!
I knew you'd choose that.");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B030323001_03_070");
    MsgDisp("Honda","You can't...
Do that alone, you know.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr450",0);
    MsgDispSksp(1,0);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,4);
    ScrFadeIn(0);
    VoicePlay("B030323001_03_080");
    MsgDisp("Honda","...A-Alright!");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030323001_03_090");
    MsgDisp("Honda","Alright!
Now we can figure out how fear works!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    BGOpen("tr460",0);
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,0);
    ChEyeOpenLevel(3,0);
    ScrFadeIn(0);
    VoicePlay("B030323001_03_100");
    MsgDisp("Honda","Well, let's go.
You can tell me what the scariest part was
later.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
