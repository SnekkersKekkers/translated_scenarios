MsgClose();
ChOpen(5,255,0,0,4,-1,-1,0,0);
ChMotion(5,4);
VoicePlay("G020530201_05_000");
MsgDisp("Hiiragi","Hey, can I ask you a question?
About friends.");
MsgDisp("主人公","Yes, what about friends?");
ChMotion(5,0);
VoicePlay("G020530201_05_010");
MsgDisp("Hiiragi","When girls hang out together,
what kind of things do they do?");
MsgDisp("主人公","I see, well......
They do things like go shopping, sing
karaoke and eat sweets...... Many things?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("G020530201_05_020");
MsgDisp("Hiiragi","I see......hmm.");
VoicePlay("G020530201_05_030");
MsgDisp("Hiiragi","I wouldn't worry about anything if it were
with you, but I'm going out with a
guy friend.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020530201_05_040");
MsgDisp("Hiiragi","We haven't hung out since elementary 
school, so I'm a little tense.");
MsgDisp("主人公","Hehe, I'm happy for you.");
ChEye(5,3);
VoicePlay("G020530201_05_050");
MsgDisp("Hiiragi","Yes, back in elementary school, 
we only played in the park......
It was fun.");
MsgDisp("主人公","(｛柊＊＊＊｝ didn't get to hang out with
his friends much in elementary or middle
school...... I'm so happy for him!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
