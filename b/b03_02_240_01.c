BGOpen("tr500",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030224001_02_000");
MsgDisp("Sassa","Ahh...～ This is a great place. The air is
so crisp, too.");
MsgSel("I wonder if there are animals?","Want to head to the campground?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B030224001_02_010");
    MsgDisp("Sassa","Ooh, maybe there's horseback riding!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030224001_02_020");
    MsgDisp("Sassa","Let's do it!
Being in the outdoors is so exciting.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
