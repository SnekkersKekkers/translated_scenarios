MsgDisp("主人公","What food do you like?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B070100000_01_060");
MsgDisp("Kazama","Soba I guess.
Since I came back, my love for soba
noodles have been rekindled.");
MsgDisp("主人公","Soba is delicious isn't it?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B070100000_01_070");
MsgDisp("Kazama","Delicious. Especially fresh soba,
fewly-made.");
MsgDisp("主人公","I can see you making it yourself,
｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_080");
MsgDisp("Kazama","Come to think of it, when I was younger,
my Grandpa did teach me how to make it.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,2);
VoicePlay("B070100000_01_090");
MsgDisp("Kazama","I couldn't do it well at all, so in the
end I made it into sobagaki.");
MsgDisp("主人公","Sobagaki... that sounds delicious too!
Ah——");
SEPlay("EV_SE_017");
ChEye(1,0);
ChMouth(1,2);
SEWait();
Wait(40,1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
ChCheek(1,7);
VoicePlay("B070100000_01_100");
MsgDisp("Kazama","Y-You...");
MsgDisp("主人公","(Ahh, how embarrassing...
But why is ｛風真＊＊｝ getting shy?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
