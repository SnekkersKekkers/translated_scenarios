ChLayout(1);
BGOpen("sc520",0);
ScrFadeIn(0);
MsgDisp("主人公","(......Ah, the bell's about to ring!
I have to get back to class.)");
SEPlay("EV_SE_049");
ScrQuake(1);
MsgDisp("主人公","Wah, I'm so sorry!");
MsgClose();
BGMPlay("BGM_C32_HIMURO_A",0.01);
ChOpen(32,254,0,1,1,#1,#1,0,0);
VoicePlay("Z813200000_32_000");
MsgDisp("VP Himuro","A sudden change in direction
is quite dangerous.");
MsgDisp("主人公","Ah, Himuro-sensei!
I'm sorry!");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200000_32_010");
MsgDisp("VP Himuro","......It'll be too late for apologies
if you get hurt.
Take care from this point on.");
MsgDisp("主人公","Yes, sir.");
MsgDisp("主人公","(......Ah.
There's dust on Himuro-sensei's
necktie...... Let's get that for him.)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(0);
ChEye(32,0);
ChMouth(32,0);
SEPlay("EV_SE_063",0,0.6);
MsgDisp("","(pat pat)");
ChEye(32,2);
ChMouth(32,1);
VoicePlay("Z813200000_32_020");
MsgDisp("VP Himuro","W-What are youー");
MsgDisp("主人公","Um, there was dust on
your necktie, so......");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200000_32_030");
MsgDisp("VP Himuro","I see. My apologies.
I mistook your actions for skinship.");
SEStop("EV_SE_063");
MsgDisp("主人公","Huh, skinship?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.7,0.6);
ChClose(32);
ChLayout(1);
MsgClose();
ChOpen(32,254,0,0,0,#1,#1,0,0);
VoicePlay("Z813200000_32_040");
MsgDisp("VP Himuro","Why the surprise? I have taught here
for years. I've seen many an energetic
student such as yourself...... Ahem.");
MsgDisp("主人公","I see...... But,
skinship is still too difficult for me.");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("Z813200000_32_050");
MsgDisp("VP Himuro","Hm...... very well.
I will be a practical model for your
studies, if you'd like.");
MsgSel("I'll be counting on you!","I'll figure it out myself.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
