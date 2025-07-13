BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B030523000_05_000");
MsgDisp("Hiiragi","The crowd is brimming with excitement.
Let's have fun too. Where to, then?");
MsgSel("The Roller Coaster is good","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the teacup.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030523000_05_010");
    MsgDisp("Hiiragi","Correct answer.
It would be nice if we were in front
of the line already!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr420",0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(5,5);
    VoicePlay("B030523000_05_020");
    MsgDisp("Hiiragi","That feeling of floating while
falling through the air......Interesting!");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMotion(5,3);
    VoicePlay("B030523000_05_030");
    MsgDisp("Hiiragi","That is also an option.
Let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr430",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("B030523000_05_040");
    MsgDisp("Hiiragi","I like that feeling you get when
boarding. It's a little nerve-wracking,
like being on a ski lift.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B030523000_05_050");
    MsgDisp("Hiiragi","That's right, we're always up for
a challenge.
Let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr440",0);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(5,5);
    VoicePlay("B030523000_05_060");
    MsgDisp("Hiiragi","The harder the challenge, the
sweeter the victory.
That's the true challenger spirit.");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChMotion(5,0,1);
    VoicePlay("B030523000_05_070");
    MsgDisp("Hiiragi","That looks like fun.
Let's go for a ride.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    Wait(40,0);
    BGOpen("tr450",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B030523000_05_080");
    MsgDisp("Hiiragi","Sitting in the tea cup with you
is definitely an interesting situation.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
