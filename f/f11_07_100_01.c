ChLayout(1);
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","(This year's a success, too.
Maybe there are more general visitors than
last year?)");
VoicePlay("F110710001_47_000");
MsgDisp("Woman Customer A","Um, excuse me.
Where do I go to meet the pony prince?");
MsgDisp("主人公","Huh?
Pony prince?");
VoicePlay("F110710001_48_000");
MsgDisp("Woman Customer B","I met him!
At the horse riding lessons.");
VoicePlay("F110710001_47_010");
MsgDisp("Woman Customer A","Really∋
Sorry, I really want to see him.");
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
SEWait();
MsgDisp("主人公","('Pony', huh... how strange.)");
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("F110710001_07_000");
MsgDisp("Mikage","Ha....");
MsgDisp("主人公","Ah, ｛御影＊＊｝!
Huh?
A mobile zoo?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F110710001_07_010");
MsgDisp("Mikage","I got too carried away, so Vice Principal
Himuro gave me a real earful......");
MsgDisp("主人公","Eh∋");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("F110710001_07_020");
MsgDisp("Mikage","It's just a school event, they said. It'll
be fun, they said. No, it's my fault. I'll
just walk around quietly now.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(That expression...
Didn't he look kind of upset?
... Was he disappointed?)");
MsgClose();
ScrFadeOut(0,0);
