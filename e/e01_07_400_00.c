ChLayout(1);
BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's almost time to go home.
Huh?
Who's that over there...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(21,255,3,0,0,#1,#1,0,2,0,30);
VoicePlay("E010740000_21_000");
MsgDisp("Michiru","Ah, Mari.");
MsgDisp("主人公","｛みちる＊｝, ｛御影＊＊｝.
Hello!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010740000_07_000");
MsgDisp("Mikage","Yo.
You seem to be doing well.");
MsgDisp("主人公","What are you two talking about?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("E010740000_21_010");
MsgDisp("Michiru","Hey, Mari do you know what \"hiyashi chuka\"
is?");
MsgDisp("主人公","Yeah.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("E010740000_21_020");
MsgDisp("Michiru","I thought so...
I happened to meet Mikage-sensei and we
ended up talking about our favorite foods.");
MsgDisp("Michiru","Isn't it really delicious?");
MsgDisp("主人公","Hehe, I see.
So ｛御影＊＊｝ likes chilled noodles.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010740000_07_010");
MsgDisp("Mikage","Yeah, it goes great with cucumbers,
tomatoes, and other summer vegetables.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
ChEyeOpenLevel(7,0);
VoicePlay("E010740000_07_020");
MsgDisp("Mikage","Hmm...the only downside to Haba High is
that it doesn't have it on the menu.");
ChEye(21,2);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("E010740000_21_030");
MsgDisp("Michiru","Seriously...
If it was on the cafeteria menu, I'd eat
it all the time.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010740000_07_030");
MsgDisp("Mikage","So, I'd like both of you to vote for it in
the cafeteria request box.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("E010740000_21_040");
MsgDisp("Michiru","Yeah.
I want to have it too.
I'll ask Hikaru to help out.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("E010740000_07_040");
MsgDisp("Mikage","That's reassuring.
I'm counting on you guys.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
VoicePlay("E010740000_07_050");
MsgDisp("Mikage","Hmm, we'll probably need more votes...");
ChPosition(21,0);
Wait(30);
MsgDisp("主人公","Hehe.
｛御影＊＊｝, will you ask others for
help too?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("E010740000_21_050");
MsgDisp("Michiru","Seems that way. But seeing Mikage-sensei
go that far makes me even more excited to
have \"hiyashi chuka\".");
MsgDisp("主人公","(Is it okay for ｛みちる＊｝'s to get her
hopes up like that?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
