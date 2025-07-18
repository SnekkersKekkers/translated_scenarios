BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc746",0);
BGMPlay("BGM_ENGEKI_F",0.01);
SEPlay("EV_SE_674",0.5);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","I thought as long as I could weave on the
loom, that was enough.");
MsgDisp("主人公","Until I met you, Hikoboshi-sama.");
SEVol(0.5,3);
VoicePlay("P240600000_06_000");
MsgDisp("Himuro","......");
MsgDisp("主人公","(...Huh? At this part, Hikoboshi is
supposed to take Orihime's hand...)");
MsgDisp("主人公","Hikoboshi-sama...?");
VoicePlay("P240600000_06_010");
MsgDisp("Himuro","! ...Thy truth is also my truth.");
MsgClose();
BGMVol(0.5,2);
SEPlay("EV_SE_551",0,0.7);
ScrFadeOut(0);
StlOpen("ev_06_14");
StlEye(6,1);
StlMouth(6,1);
SEStop("EV_SE_674",6);
ScrFadeIn(0);
MsgDisp("主人公","∋");
StlEye(6,1,0);
StlMouth(6,1);
StlEyeOpenLevel(6,5,1);
VoicePlay("P240600000_06_020");
MsgDisp("Himuro","Day after day, I would steadily pull ox
and plough the fields. That was my world.
All that I ever knew.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("P240600000_06_030");
MsgDisp("Himuro","However, since the day I was called by the
Celestial Emperor and the day I first laid
eyes on you, everything changed.");
MsgDisp("主人公","(｛氷室＊＊｝'s not wearing his glasses—so
close!
This is nothing like what we practiced!)");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("P240600000_06_040");
MsgDisp("Himuro","Since meeting you, I——");
MsgDisp("主人公","(...
Eh, 'I'?)");
VoicePlay("P240600000_06_050");
MsgDisp("Himuro","Whether it's at school, or at the beach,
I'm always thinking of you.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("P240600000_06_060");
MsgDisp("Himuro","This isn't like me at all...");
MsgDisp("主人公","(Ugh...what should we do?
This is different to the script...
No, I'll just keep going.)");
MsgDisp("主人公","But...my father, the Celestial Emperor,
does not view our current relationship
favorably. If things continue like
this——");
StlEye(6,1,0);
StlMouth(6,1);
StlEyeOpenLevel(6,5,1);
VoicePlay("P240600000_06_070");
MsgDisp("Himuro","You're saying he'll tear us apart?
Fine, I'll take that challenge.");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("P240600000_06_080");
MsgDisp("Himuro","May it be a river, or anything else, I'll
overcome it.
No, I'll definitely manoeuvre over it!");
MsgDisp("主人公","Ah, please refrain from surfing in
heaven's river...!");
SEPlay("EV_SE_GAYA_006",0,0.7);
SEPlay("EV_SE_CLAP_002",0.1,0.6);
BGMStop(2);
MsgClose();
ScrFadeOut(0);
Wait(100,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEStop("EV_SE_GAYA_006",1.5);
SEStop("EV_SE_CLAP_002",1.5);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","Haa, somehow it's over.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,38,0,0,0,#1,#1,0,0);
VoicePlay("P240600000_06_090");
MsgDisp("Himuro","Sorry...about that.");
MsgDisp("主人公","Eh...
Ah, you mean the adlibbing?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("P240600000_06_100");
MsgDisp("Himuro","Not so much ad-libbing, but more like my
true feelings...");
MsgDisp("主人公","Hehe, for you to incorporate that, isn't
that amazing, ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("P240600000_06_110");
MsgDisp("Himuro","Ugh...
Well, it's fine.
Let's leave it at that.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
MsgDisp("主人公","(｛氷室＊＊｝)?");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(6,0);
