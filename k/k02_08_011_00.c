ChClose(8);
BGMStop();
BGOpen("ho000",2);
MsgClose();
ChOpen(8,255,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("K020801100_08_000");
MsgDisp("Shirahane","We're here, huh......");
MsgDisp("主人公","Yeah.
Thanks for walking me home.");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("K020801100_08_010");
MsgDisp("Shirahane","As a man, I gotta......
And, there's still somethin' left
for me to do today.");
MsgDisp("主人公","Hm?");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020801100_08_020");
MsgDisp("Shirahane","Today's your birthday, right?
So, we gotta celebrate.");
MsgDisp("主人公","｛大地＊＊｝, you remembered?");
ChEye(8,3);
ChMouth(8,3);
VoicePlay("K020801100_08_030");
MsgDisp("Shirahane","Yeah. Heheh!");
ChMotion(8,3,1);
VoicePlay("K020801100_08_040");
MsgDisp("Shirahane","Happy birthday.
Here's a gift.");
MsgDisp("主人公","Thank you, ｛大地＊＊｝!");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
VoicePlay("K020801100_08_050");
MsgDisp("Shirahane","Heheh!
Today's mission is complete!");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020801100_08_060");
MsgDisp("Shirahane","Actually, th' whole time during
the date, I wanted t'hand it over......
Now, I'm handin' it over at the end.");
MsgDisp("主人公","Hehe!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
VoicePlay("K020801100_08_070");
MsgDisp("Shirahane","Well, see ya.
Night.");
MsgDisp("主人公","Yeah, good night!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8,0,30);
SEWait();
MsgDisp("主人公","(I'm so happy......!
Today's date was amazing......)");
MsgClose();
ScrFadeOut(0,0);
