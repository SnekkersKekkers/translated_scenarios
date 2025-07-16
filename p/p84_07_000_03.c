
MsgDisp("School Girl","Haa... this much is left over...
Seems like the wrong amount of materials
were ordered...");
MsgDisp("主人公","I'm sorry...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("P840700003_07_000");
MsgDisp("Mikage","｛主人公｝.
Is there a lot of cardboard leftover?");
MsgDisp("主人公","Ah, ｛御影＊＊｝.
If it's cardboard you want, there's lots
of it.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P840700003_07_010");
MsgDisp("Mikage","I don't need a lot.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,0);
VoicePlay("P840700003_07_020");
MsgDisp("Mikage","Hm?
Why are you making a depressed-looking
face?");
MsgDisp("主人公","I messed up the number of cardboard to
order, so now there's lots left over.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P840700003_07_030");
MsgDisp("Mikage","So it's like that.
Isn't it better than not having enough?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P840700003_07_040");
MsgDisp("Mikage","No one is in trouble because they can't
use it, and the cardboard company is
happy.");
MsgDisp("主人公","But, I made a mistake of a digit, and now
there's a huge amount of cardboard...
ugh....");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700003_07_050");
MsgDisp("Mikage","It was a difference of a digit?
Then, I think it would be better if you
returned it.");
MsgDisp("主人公","(Haa...
It would have been better if I had
prepared more carefully.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
