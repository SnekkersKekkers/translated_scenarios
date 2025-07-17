BGOpen("sc300",0);
ScrFadeIn(0);
VoicePlay("P200000000_45_000");
MsgDisp("Chairperson","If you're interested in joining the school
play at this year's cultural festival,
please make sure to sign up.");
MsgDisp("主人公","(There's also the club exhibition, I
wonder what I should do...)");
MsgSel("Focus on the club exhibition","Participate in the school play");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("P200000000_45_010");
    MsgDisp("Chairperson","Let's work hard together for the cultural
festival in two weeks!");
    SEPlay("EV_SE_CLAP_004");
    MsgDisp("主人公","(Alright, let's give it our all for the
club's exhibition!)");
    SEStop("EV_SE_CLAP_004",1);
    break ;
    case 1:
    VoicePlay("P200000000_45_020");
    MsgDisp("Chairperson","Let's work hard together for the cultural
festival in two weeks!");
    SEPlay("EV_SE_CLAP_004");
    MsgDisp("主人公","(Yeah, let's do our best in the school
play!)");
    SEStop("EV_SE_CLAP_004",1);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
