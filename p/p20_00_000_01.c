BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah... it's my phone.
It's from the class president.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("P200000001_45_000");
MsgDisp("Chairperson","Hello.
We are preparing for the cultural festival
for the next two weeks.");
VoicePlay("P200000001_45_010");
MsgDisp("Chairperson","At this year's cultural festival, we're
hosting a school play.
Would you like to join?");
MsgDisp("主人公","(There's also a club exhibition, I wonder
what I should do...)");
MsgSel("I'll focus on the club exhibition","I'll participate in the school play");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("P200000001_45_020");
    MsgDisp("Chairperson","Understood. Please do your best with the
club exhibition. Take care.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    break ;
    case 1:
    VoicePlay("P200000001_45_030");
    MsgDisp("Chairperson","Understood. Please do your best with the
preparations for the school play. Take
care.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgDisp("主人公","(...
I need to get better soon, to help with
the preparations!)");
MsgClose();
ScrFadeOut(0);
