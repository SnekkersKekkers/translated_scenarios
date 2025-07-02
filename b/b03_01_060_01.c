BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B030106000_01_010");
MsgDisp("Kazama","Alright, what do you want to do?");
MsgSel("Let's go to the beach!","Shall we check out the Blue Grotto?");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("B030106000_01_020");
    MsgDisp("Kazama","Just don't get lost from me.
Alright?");
    break ;
    case 1:
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B030106000_01_030");
    MsgDisp("Kazama","It's a rocky place out here,
so won't you get hurt if you fall?
No running, right?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
