BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040211101_02_000");
MsgDisp("Sassa","Figure skaters sense of balance is
amazing, huh?
I wonder how they train");
MsgSel("They revolve like a spinning top, huh?","Isn't it natural born talent?","Amusement park coffee cups?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040211101_02_010");
    MsgDisp("Sassa","Totally like a spinning top. They suddenly
stop, then make a signature pose at the
end. How do they do it?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040211101_02_020");
    MsgDisp("Sassa","There's no way it's natural for every
figure skater.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("B040211101_02_030");
    MsgDisp("Sassa","Is that it?!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
