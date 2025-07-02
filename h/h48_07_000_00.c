MsgClose();
BGOpen("sc623",0);
ScrFadeIn(0);
ChOpen(7,254,0,0,0,-1,-1,0,0);
VoiceEVSPlay(7);
VoicePlay("H480700000_07_000");
MsgDisp("Mikage","｛主人公｝.");
MsgDisp("主人公","Ah, ｛御影＊＊｝!
So you came to support me.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("H480700000_07_010");
MsgDisp("Mikage","Yeah, today's your last tournament.
I'm going to cheer until I lose my
voice, okay?");
MsgDisp("主人公","Hehe.
But, you can't be too loud.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("H480700000_07_020");
MsgDisp("Mikage","Then I'll cheer quietly, so I don't
disrupt your performance.");
MsgDisp("主人公","Yes, thank you very much.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("H480700000_07_030");
MsgDisp("Mikage","But I'll still be clapping
as hard as I can, okay?
Good luck.");
MsgDisp("主人公","Yes, I'll be doing my best as well!");
MsgDisp("主人公","(Alright!
I'll give a performance worth
showing off to ｛御影＊＊｝!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
