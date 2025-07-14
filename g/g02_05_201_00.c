MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020520100_05_000");
MsgDisp("Hiiragi","I wonder if my own emotions are being
reflected...... The fireflies seem to be
emitting a blue light.");
MsgDisp("主人公","Eh, what's wrong?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("G020520100_05_010");
MsgDisp("Hiiragi","I just haven't been able to sort my
feelings out yet.");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("G020520100_05_020");
MsgDisp("Hiiragi","Right now, I strongly feel how happy I am
to see your smile up close.");
MsgDisp("主人公","O-Okay?");
ChMotion(5,2);
VoicePlay("G020520100_05_030");
MsgDisp("Hiiragi","Huu...... In order to see your smile up
once more...... What should I do?");
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G020520100_05_040");
MsgDisp("Hiiragi","I'll try to figure out the answer on my
own. I think that's when I'll finally sort
out my feelings.");
MsgDisp("主人公","Y-Yeah.");
ChMotion(5,4);
VoicePlay("G020520100_05_050");
MsgDisp("Hiiragi","The next time I come here, I hope the
fireflies' light will look like a
different color.");
MsgDisp("主人公","(｛柊＊＊＊｝ seems different to
usual......
Perhaps this is his inner voice?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
