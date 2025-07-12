BGOpen("fp100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B330A30301_01_000");
MsgDisp("Kazama","Heehー.
Looks like a new shop is 
opening over there.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A30301_02_000");
MsgDisp("Sassa","It really is, it's under construction.
What kind of shop is it...?
Do you know anything about it?");
MsgDisp("主人公","Nope.
I wonder what shop it is?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30301_06_000");
MsgDisp("Himuro","Considering the location, 
it seems to be a restaurant.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B330A30301_01_010");
MsgDisp("Kazama","If that's the case, a soba 
restaurant would be nice.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A30301_02_010");
MsgDisp("Sassa","I want a sauna.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330A30301_01_020");
MsgDisp("Kazama","He already said it
looks likely to be a restaurant.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A30301_02_020");
MsgDisp("Sassa","The heart wants what it wants.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
VoicePlay("B330A30301_06_010");
MsgDisp("Himuro","Then I would like an
instrument or surfing shop.
...You?");
MsgDisp("主人公","Hmm....
Maybe some tasty food you can 
eat whilst walking around?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30301_01_030");
MsgDisp("Kazama","There it is, the glutton.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("B330A30301_02_030");
MsgDisp("Sassa","Sounds good!
I'll also switch my answer 
from sauna to that as well.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A30301_06_020");
MsgDisp("Himuro","Right.
Something like Donut Holes 
would be nice too.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("B330A30301_02_040");
MsgDisp("Sassa","You say \"something like\" but
you already have a target
in mind don't you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30301_06_030");
MsgDisp("Himuro","Ha? That's fine.
Someone who changed their answer from
\"sauna\" shouldn't be talking.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("B330A30301_01_040");
MsgDisp("Kazama","Wait, wait.
Isn't there something
written on the sign?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("B330A30301_02_050");
MsgDisp("Sassa","Oh, let's go take a look!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("B330A30301_06_040");
MsgDisp("Himuro","I'll also come.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30301_01_050");
MsgDisp("Kazama","Hey, you come with us too.");
MsgDisp("主人公","Yeah.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
ChClose(6,0,30);
ChClose(1,0,30);
ChClose(2,0,30);
VoicePlay("B330A30301_02_060");
MsgDisp("Sassa","What, it only has 
people's names written on it.");
VoicePlay("B330A30301_01_060");
MsgDisp("Kazama","Well, that just gives us
something to look forward to.");
VoicePlay("B330A30301_06_050");
MsgDisp("Himuro","Right.
But, it doesn't look like a sauna.");
MsgDisp("主人公","(Hehe, I'm looking 
forward to when it opens!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
