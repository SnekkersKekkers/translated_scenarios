ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoicePlay("P040500001_05_000");
MsgDisp("Hiiragi","Thank you for the food.");
MsgDisp("主人公","How did you find the taste?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P040500001_05_010");
MsgDisp("Hiiragi","Hm?
I didn't expect that you'd ask that.");
MsgDisp("主人公","Huh...?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P040500001_05_020");
MsgDisp("Hiiragi","Hm, I had believed that the point here was
to enjoy the atmosphere, rather than the
taste... I suppose I was wrong...");
MsgDisp("主人公","(Ugh...
I should have checked the flavor more
thoroughly...)");
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
