BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ScrFadeIn(0);
VoicePlay("B040120000_01_000");
MsgDisp("Kazama","Hey, will you be alright?");
MsgSel("Just call me the snowtop princess!","It's to the point I won't fall...","I wanted you to teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(1,3);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040120000_01_010");
        MsgDisp("Kazama","Ohh, nicely done.
Seems like today will be fun.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040120000_01_020");
        MsgDisp("Kazama","The ski slope is filled with holes.
Just how hard do you have to fall?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040120000_01_030");
    MsgDisp("Kazama","Well done.
Now, if you're scared, give me your hand.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040120000_01_040");
    MsgDisp("Kazama","Hm?
That's not like you.
Are you scheming something?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
