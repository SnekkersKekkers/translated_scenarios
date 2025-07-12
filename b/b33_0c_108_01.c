ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr440",0);
ScrFadeIn(1,40);
Wait(60,1);
ScrFadeOut(1,0,40);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(5,255,0,0,4,#1,#1,0,3);
ChOpen(6,255,0,0,0,#1,#1,0,3);
ChOpen(7,255,2,2,2,0,#1,0,3);
ScrFadeIn(0);
VoicePlay("B330C10801_07_000");
MsgDisp("Mikage","I can't no matter 
how many times I do it...");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
MsgDisp("主人公","｛御影＊＊｝... are you alright?");
ChEye(7,2);
ChMouth(7,2);
ChMotion(7,4);
VoicePlay("B330C10801_07_010");
MsgDisp("Mikage","Yeah, somewhat.
But I can't do it again.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330C10801_06_000");
MsgDisp("Himuro","Kojiro -sensei, it is
over when you give up.
Let's go once more!");
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChEye(7,1);
ChMouth(7,1);
ChMotion(7,1);
VoicePlay("B330C10801_07_020");
MsgDisp("Mikage","Oi, Inori.
You're enjoying yourself aren't you?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330C10801_06_010");
MsgDisp("Himuro","Wasn't it Kojiro-sensei who said he
wanted to overcome his fear of heights?");
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("B330C10801_07_030");
MsgDisp("Mikage","That's right, but there's
a limit to drastic measures.
Isn't there something milder?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10801_05_000");
MsgDisp("Hiiragi","That's right...
How about starting with the ferris wheel 
and slowly becoming accustomed to it?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330C10801_06_020");
MsgDisp("Himuro","Either go all the way to the top in
one go, or climb one step at a time.
It's one of those.");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,0);
VoicePlay("B330C10801_07_040");
MsgDisp("Mikage","Hmmm...");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B330C10801_06_030");
MsgDisp("Himuro","Kojiro-sensei would be the former. 
To reach the summit in one go.
That's what I thought anyways.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("B330C10801_07_050");
MsgDisp("Mikage","Well sure.
Taking it slow isn't in my nature.");
MsgDisp("主人公","Eh, is that really alright?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B330C10801_05_010");
MsgDisp("Hiiragi","Yes, don't push yourself.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
ChClose(7,0,30);
ChClose(6,0,30);
ChClose(5,0,30);
MsgDisp("主人公","(He left... I wonder if ｛御影＊＊｝ will
be alright...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(5,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
