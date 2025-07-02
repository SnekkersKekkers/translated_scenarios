BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030223001_02_000");
MsgDisp("Sassa","Alright, which should we do?");
MsgSel("Roller coaster sounds fun","Let's ride the ferris wheel","I want to try bungee jumping!","I want to ride the tea cups","Let's go in the haunted house");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030223001_02_010");
    MsgDisp("Sassa","Sounds good, let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr420",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223001_02_020");
    MsgDisp("Sassa","We have to get on before we can get
started, right?");
    break ;
    case 1:
    MsgDispSksp(1,0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B030223001_02_030");
    MsgDisp("Sassa","Into that little box...
Well, it's fine.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr430",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4,1);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223001_02_040");
    MsgDisp("Sassa","Some people seem to like it.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1,1);
    VoicePlay("B030223001_02_050");
    MsgDisp("Sassa","I've been waiting for this!
Let's go!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr440",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223001_02_060");
    MsgDisp("Sassa","That was seriously high! 20 meters!");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B030223001_02_070");
    MsgDisp("Sassa","Urgh... You got it...
I was preparing for this anyway.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr450",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223001_02_080");
    MsgDisp("Sassa","The more I look at it, the weirder it
gets. It even spins around...");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B030223001_02_090");
    MsgDisp("Sassa","Gah... That's someone's house, right?
Is it okay to enter without permission?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr460",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223001_02_100");
    MsgDisp("Sassa","It's all fake, it's just their job, it's
all fake...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
