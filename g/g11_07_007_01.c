BGOpen("sc520",0);
ScrFadeIn(0);
MsgDisp("主人公","(I still have some time before lunch
ends...Ah, that reminds me. The other day
｛御影＊＊｝ said I could drop by
anytime, right?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc512",0);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","(...?
He's not in the science prep room...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110700701_07_000");
MsgDisp("Mikage","Oh, welcome.");
MsgDisp("主人公","Hehe, it looks a little bit like a store.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700701_07_010");
MsgDisp("Mikage","Oh, that would be nice.
Maybe we should do a 'Molly's milk stand'
at lunchtime?");
MsgDisp("主人公","Is this the cow ｛御影＊＊｝ showed me
at his house the other day?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700701_07_020");
MsgDisp("Mikage","Yeah.
Milk, vegetables and bread.
That would be popular, wouldn't it?");
MsgDisp("主人公","Yes.
It would be even more fun if Molly and the
others were here too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700701_07_030");
MsgDisp("Mikage","Oh, that would be great!
If I could bring Molly and the others to
Haba High, I would die happy.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,2);
VoicePlay("G110700701_07_040");
MsgDisp("Mikage","That's right.
Everything that's important to me would be
gathered here.");
MsgDisp("主人公","Everything important to ｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700701_07_050");
MsgDisp("Mikage","Yeah.
That includes you too.");
MsgDisp("主人公","Ehh∋");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700701_07_060");
MsgDisp("Mikage","Haha, don't be so surprised.");
MsgDisp("主人公","(Hmmm, I think he's teasing me...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
