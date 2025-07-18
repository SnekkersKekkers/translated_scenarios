ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("G020710303_07_000");
MsgDisp("Mikage","Do you ever get approached by strange
characters like today?");
MsgDisp("主人公","Sometimes, but not often...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020710303_07_010");
MsgDisp("Mikage","Yeah, I figured. When you see beautifully
glowing fireflies, you naturally feel
drawn to them. It's the nature of male
fireflies to approach.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G020710303_07_020");
MsgDisp("Mikage","But today's guy didn't have much sense,
did he? If it were me, I'd do it a bit
more elegantly.");
MsgDisp("主人公","Eh...ehh∈ ｛御影＊＊｝
too?
Are you saying you do that kind of thing∋");
ChEye(7,4);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("G020710303_07_030");
MsgDisp("Mikage","I wouldn't do something so reckless.
I mean, I've lived abroad for a long time,
so I have manners——");
MsgDisp("主人公","You don't need to make excuses.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020710303_07_040");
MsgDisp("Mikage","Ah, sorry about that.");
MsgDisp("主人公","Ah...
I said that even though you helped me, I'm
sorry.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("G020710303_07_050");
MsgDisp("Mikage","It's my fault for being late.
But anyways, it seems I saw a new side to
you just now.");
MsgDisp("主人公","(Maybe it's because of this place...
I spoke to ｛御影＊＊｝
in a way I normally wouldn't...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
