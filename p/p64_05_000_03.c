ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4,1);
ChEyeOpenLevel(5,0);
ScrFadeIn(0);
VoicePlay("P640500003_05_000");
MsgDisp("Hiiragi","Hmm, 
I'm sure it tastes good...");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝. Thank you for your
purchase.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P640500003_05_010");
MsgDisp("Hiiragi","Yes, both the colour and the form are
considerably different to those on the
market.");
MsgDisp("主人公","Umm, well,
they're a bit flimsy though...");
ChEyeOpenLevel(5,0);
Wait(8,0);
ChEyeOpenLevel(5,8);
VoicePlay("P640500003_05_020");
MsgDisp("Hiiragi","Is the flavour nice?");
MsgDisp("主人公","Umm, maybe...");
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("P640500003_05_030");
MsgDisp("Hiiragi","If you, the one who made it, doesnt't have
any confidence in it, wouldn't it be a
pity for these vegetables?");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P640500003_05_040");
MsgDisp("Hiiragi","I don't want to leave any food behind, so
turns out, I'll return these vegetables.");
ChEyeOpenLevel(5,0);
MsgDisp("主人公","(Uugh... I should
have prepared better...)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
