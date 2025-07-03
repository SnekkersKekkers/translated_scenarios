MsgDisp("主人公","Hey, I'm going to ask you 
something seriously, but is that okay?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_490");
MsgDisp("Kazama","That's fine but, 
I have a bad feeling about this.");
MsgDisp("主人公","Hey.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B070100000_01_500");
MsgDisp("Kazama","Just do as you normally do.
And what is that?");
MsgDisp("主人公","Hey um, 
what do you think about love, ｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,5);
ChCheek(1,7);
VoicePlay("B070100000_01_510");
MsgDisp("Kazama","Urgh.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("B070100000_01_520");
MsgDisp("Kazama","There's no particular way to think about
it. I've been thinking seriously about it
for a long time.");
MsgDisp("主人公","I see.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070100000_01_530");
MsgDisp("Kazama","For me, love is entwined with my dreams, 
my memories and my current life.");
ChMotion(1,4);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,4);
ChMouth(1,2);
VoicePlay("B070100000_01_540");
MsgDisp("Kazama","So to only extract \"love\" 
from the equation is difficult.
I can't do it.");
MsgDisp("主人公","I see.
I guess I should also think about it
more seriously, like you do, ｛風真＊＊｝?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("B070100000_01_550");
MsgDisp("Kazama","...Seriously.
I'm seriously counting on you.");
MsgDisp("主人公","(He's relying on me a lot....)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
