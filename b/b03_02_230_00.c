BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030223000_02_000");
MsgDisp("Sassa","What should we do first?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030223000_02_010");
    MsgDisp("Sassa","Oh, nice pick!
You can't go wrong there.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr420",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223000_02_020");
    MsgDisp("Sassa","The safety bar here is pretty tight.");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B030223000_02_030");
    MsgDisp("Sassa","Seriously?
Well, I'm the one who asked.
So it can't be helped.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr430",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    ChEyeOpenLevel(2,9);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223000_02_040");
    MsgDisp("Sassa","Only 15ish minutes we have to be canned in
here...");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030223000_02_050");
    MsgDisp("Sassa","Oh, that's awesome.
Let's jump with all our heart in it!");
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
    VoicePlay("B030223000_02_060");
    MsgDisp("Sassa","You jump up once, then come flying down.");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B030223000_02_070");
    MsgDisp("Sassa","If you want to ride it's fine I guess...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    BGOpen("tr450",0);
    Wait(40);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0,1);
    ChEyeOpenLevel(2,9);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030223000_02_080");
    MsgDisp("Sassa","...I'm begging you to slow down.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
